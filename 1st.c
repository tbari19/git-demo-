#include<stdio.h>
void  main()
{
    int a,b,c;
    system("cls");
    printf("\n\t a=>");
    scanf("%d",&a);
    
    printf("\n\t b=>");
    scanf("%d",&b);
    
    printf("\n\t c=>");
    scanf("%d",&c);
    
   if(a<=9)
   {
       if(b<=9)
       {
           if(c<=9)
           {
               if(a==b)
               {
                   if(b==c)
                   {
                       printf("\n\tALL ARE SAME");
                   }
                   else
                   {
                       printf(" \n\tONLY A & B ARE SAME");
                   }
               }
               else
               {
                   if(b==c)
                   {
                       printf("\n\tONLY B & C ARE SAME ");
                   }
                   else
                   {
                       printf("\n\tALL ARE DIFFERENT");
                   }
                }
           }    
           else
           {
               printf("\n\t %d IS NOT A SINGLE DIGIT NUMBER",c);
           }
       }
       else
       {
           printf("\n\t %d IS NOT A SINGLE DIGIT NUMBER",b);
       }
   }
   else
   {
       printf("\n\t %d IS NOT A SINGLE DIGIT NUMBER",a);
   }
    getch();

}