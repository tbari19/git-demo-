#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()    //WAP TO PRINT FIBBONASI series
{
    int r,a,b,c,no;
    system("cls");
    printf("\n\tEnter no=>");
    scanf("%d",&no);
    a=0;
    b=1;
    r=0;
    printf("\n\t%d\n\t%d",a,b);
    while(b<=no)
    {
        
        r=a+b;
        a=b;
        b=r;
        printf("\n\t%d",r);
    
    }
    getch();
}