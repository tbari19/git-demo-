#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()    //WAP TO PRINT REVERSE NUMBER
{
    int r,t,no;
    system("cls");
    printf("\n\tEnter no=>");
    scanf("%d",&no);
    t=0;
    while(no!=0)
    {
        r=no%10;
        t=(t*10)+r;
        printf("\n\t%d",r);
        no=no/10;
        
    }
    printf("\n\t%d",t);
    getch();
}