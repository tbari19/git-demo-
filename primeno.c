#include<stdio.h>
void main()
{
    int no,temp,r,c;
    system("cls"); 
    printf("Enter 1st no=>");
    scanf("%d",&no);
           // no%2,3,4==1?printf("prime no"):printf("not prime no");
     temp=no;
    c=2;
    while(no%c!=0)
    {
       c++;
    }
    if(c==temp)
    {
        printf("PRIME NO");
    }
    else
    {
        printf("NOT PRIME NO");
    }


    getch();                      
}