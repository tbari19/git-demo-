#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()                //diamond using pyramids
{
   int n,t,add=0;
   system("cls");
   for(n=1;n<=5;n++)
   {      
       printf("\n\t");
        for(t=n;t<=5;t++)
       {
            printf(" %d ",t);
       }
       for(t=2;t<=n;t++)
       {
           printf(" . ");
       }
        for(t=2;t<=n;t++)
       {
           printf(" . ");
       }
        for(t=5;t>=n;t--)
       {
            printf(" %d ",t);
       }  
   }

   for(n=5;n>=1;n--)
   {      
       printf("\n\t");
        for(t=n;t<=5;t++)
       {
            printf(" %d ",t);
       }
       for(t=n;t>=2;t--)
       {
           printf(" . ");
       }
        for(t=n;t>=2;t--)
       {
           printf(" . ");
       }
        for(t=5;t>=n;t--)
       {
            printf(" %d ",t);
       }  
   }
   getch();
}