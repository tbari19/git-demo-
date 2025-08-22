#include<stdio.h>
void main()
{
    int c,no,r;
    system("cls");
    printf("\n\t Enter No=>");//no whose table want to print 
    scanf("%d",&no);
      c=1;                     //counter 
    while(c<=10)
    {
        r=no*c;
        printf("\n\t%d*%d=> %d",no,c,r);
        c=c+1;
    }
    getch();
}    