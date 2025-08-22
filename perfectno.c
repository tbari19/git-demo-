#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int no,r,temp,c,add;
    no=1;
    while(no<=1000)
    {
        printf("\n");
        temp=no; 
        add=1;
        c=2;
        while(no!=0)
        {
            r=no%c;
            if(r==0)
            {
                no=no/c;
                add=add+c;
            }
            else
            {
                c=c+1;
            }
        }
       if(temp==add)
        {
           printf("%dis Perfect no",add);
        }
        no=temp;
        no=no+1;
    }
    getch();
}