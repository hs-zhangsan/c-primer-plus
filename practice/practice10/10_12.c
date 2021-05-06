#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void yearly_average(double ar[][12], int n);
void monthly_average(double ar[][12], int n);

int main(void)
{
    const double rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    yearly_average(rain, 5);
    monthly_average(rain, 5);

	return 0;
}

void yearly_average(double ar[][12], int n)
{
    int year, month;
    double subtot, total;

    printf("YEAR       RAINFALL(inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += ar[year][month];
        }
        printf("%4d %15.1lf\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1lf inches.\n\n", total / YEARS);
}

void monthly_average(double ar[][12], int n)
{
    int year, month;
    double subtot;

    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += ar[year][month];
        }
        printf("%3.1lf ", subtot / YEARS);
    }
    printf("\n");
}