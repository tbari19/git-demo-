#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()           //if the no & sum of its digit's cube is same = armstrong no
{
  int no,r,t,add,temp;
  no=1;
  while(no<=1000)
  {
      printf("\n");
      r=0;
      t=0;
      add=0;
      temp=no;
      while(no!=0)
      {
          r=no%10;
          t=t+(r*r*r); 
          no=no/10;        //at the end of loop no=0 
      }
      if(temp==t)
      {
          printf("%d",t);
      }
      no=temp;           //restore number into no
      no=no+1;
   }          



}