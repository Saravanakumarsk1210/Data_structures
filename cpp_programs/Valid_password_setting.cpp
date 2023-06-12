#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int i,length,count=0,ct=0,cnt=0;
int flag1=1,flag2,flag3,flag4,flag5;
char ps[15];
int ch=1;
while(flag1!=0||flag2!=0||flag3!=0||flag4!=0||flag5!=0)
    {
    printf("\nENTER PASSWORD  :   ");
    gets(ps);
    length=strlen(ps);
    count=0;cnt=0;ct=0;
    if(strlen(ps)<8){
        printf("YOUR PASSWORD SHOULD BE ATLEAST 8 CHARACTERS LONG");}
        else
        flag1=0;

    for(i=0;i<length;i++)
    {
    if(ps[i]==' ')
    {
        printf("YOUR PS SHOULD NOT CONTAIN BLANK SPACE\n");
        }
        else
            flag2=0;
    if(ps[i]!='&'&&ps[i]!='*'&&ps[i]!='$'&&ps[i]!='#'&&ps[i]!='@')
    {
        count++;
        if(count==length)
            printf("\nYOUR PASSWORD SHOULD CONTAIN ATLEAST ONE SPECIAL CHARACTER\n");
            }
    else
        flag3=0;

    if(isupper(ps[i])==0)
    {
        ct++;
    if(ct==length)
        printf("YOUR PASSWORD SHOULD CONTAIN ATLEAST ONE UPPER CASE CHARACTER\n");
    }
        else
            flag4=0;

    if(isdigit(ps[i])==0)
    {
        cnt++;
    if(cnt==length){
        printf("YOUR PASSWORD MUST CONTAIN ATLEAST ONE NUMBER\n");
        }
        else
        flag5=0;

    }
    }
    }


if(flag1==0&&flag2==0&&flag3==0&&flag4==0&&flag5==0)
{
printf("**STRONG PASSWORD**");}
return 0;
}
