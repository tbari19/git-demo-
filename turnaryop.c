#include<stdio.h>
void main()
{
    int no,a,r,c;
    system("cls"); 
    printf("Enter 1st no=>");
    scanf("%d",&no);
           // no%2,3,4==1?printf("prime no"):printf("not prime no");
    a=1;
    c=0;
    while(a<=100)
    {
       
        if(no%a==0)
        {
            c++;
        }
        a=a+1;
    }

    if(c==2)
    {
        printf("PRIME NO");
    }
else
    {
        printf("NOT PRIME NO");
    }


    getch();                      
}