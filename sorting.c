#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{                        //BUBBLE SORTING METHOD
    int a[5],i,temp;
    system("cls");
    printf("enter array elements=>");
    for(i=0;i<5;i++)
    {
        scanf("%d",a[i]);
    }
    printf("sorted array is=>");
    for(i=0;i<5;i++)
    {
        printf("\n");
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;

        }
        printf("%d",a[i]);
    }
    getch();
}