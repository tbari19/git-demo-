#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,add,sub,div,mul; //declare variables 
	{
		printf("enter value for a & b\n"); //ask for values
		scanf("%d,%d",&a,&b); //scan input 
    add=a+b; //add
	sub=a-b; //subtract
	div=a/b; //divide
	mul=a*b;	//multiply
	printf("\n add=%d\n,sub=%d\n,div=%d\n,mul=%d\n",add,sub,div,mul); //take result inseperate line 
	getch();
}
return(0);
}
