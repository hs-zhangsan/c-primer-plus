//��дһ�����򣬷�����ʾ�����в����ĵ��ʡ�
//���磬�����в����� see you later���ó���Ӧ��ӡlater you see.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char str[81];
    char *p,temp;
    int i,n,length;

    gets(str);
    for(p=str,i=0,n=strlen(str);i<n/2;i++)  //�������ַ�������
    {
        temp=*(p+n-1-i);
        *(p+n-1-i)=*(p+i);
        *(p+i)=temp;
    }

    p=str;
    length=0;
    do  //���ַ����е�ÿ�����ʵ���
    {
        if(isalpha(*p))
        {
            length++;
        }
        else
        {
            if(length>1)
            for(i=0;i<length/2;i++)
            {
                temp=*(p-1-i);
                *(p-1-i)=*(p-length+i);
                *(p-length+i)=temp;
            }
            length=0;
        }
    }
    while(*p++ != '\0');
    puts(str);
    return 0;
}