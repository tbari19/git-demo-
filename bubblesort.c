#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{                        //BUBBLE SORTING METHOD=>sort largest numbers 
    int a[5],i,j,temp;
    system("cls");
    printf("enter array elements=>");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
               if(a[j]>a[j+1])
               {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }

        }
        
    }
    printf("sorted array is=>");
    for(i=0;i<5;i++)
    {
       printf("\n%d",a[i]);
    }
    getch();
}