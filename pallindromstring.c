#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()  //prog for checking if string is pallindrom string or not
{                        
    char a[30]="TATAT";
    char temp[30];
    int i,c,b=0,j;
    system("cls");
    printf("\n\tgiven string is=>%s",a);
    c=0;
    
    
    for(i=0;a[i]!='\0';i++)
    {    
       c=c+1;
       
    }
    for(i=c-1,j=0;a[i]!='\0';i--,j++)
    {
        temp[j]=a[i];
    }
    temp[j]='\0';
    for(i=0;i<5;i++)
    {
        if(a[i]==temp[i])
        {
            b++;
        }
    }
    if(c==b)
    {
        printf("\npallindrom string");
    }
    else
    {
        printf("\n not pallindrom string");
    }
    getch();
}