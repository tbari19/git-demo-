#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int r,c,no,t,temp;
  system("cls");
  no=1;
  while(no<=1000)
   {
       printf("\n ");
       temp=no;
       t=0;
       while(no!=0)
       {
         r=no%10;
         t=(t*10)+r;
         no=no/10; 
       }
       if(temp==t)
       {
       printf("%d",t);
       }
     no=temp; 
     no=no+1;
   }
   getch();

}