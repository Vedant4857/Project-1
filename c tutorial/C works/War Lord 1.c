#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("The reverse of %d is:",n);
	
   while(n>0)
   {
   	x=n%10;
   	printf("%d",x);
   	n = n/10;
   }
   return 0 ;
}