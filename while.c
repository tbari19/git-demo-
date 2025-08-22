#include<stdio.h>
void main()
{
    int no,c;
    system("cls"); 
    printf("Enter 1st no=>");
    scanf("%d",&no);
     c=1;               //counter 
    while(c<=no) 
    {
        printf("\n\t%d........%d+%d",c,c,c);  //1.......1+1
        c=c+c;
    }
    getch();
}