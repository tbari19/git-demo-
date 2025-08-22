#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[12],c;
    int i,no;
    system("cls"); 
    printf("Enter 10 numbers=>");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("prime nos ARE=>");
    for(i=0;i<10;i++)
    {
       c=2;
       no=a[i];
       while(no%c!=0)
       {
           c=c+1;
       }
       if(no==c||no==1)
       {
           printf("\n %d",a[i]);
       }       
    }
 getch();
}