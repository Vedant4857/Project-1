//To find prime factors of a number
#include<stdio.h>
int prime_factor(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int ans = prime_factor(n);
	return 0;
}
int prime_factor(int n)
{
	int i,x;
	printf("The prime factors of %d are:",n);
   for(x=1;i<n+1;x++)
   {
   	if(n%x==0)
   	   {
   		for(i=2;i<x+1;i++)
   		   {
   			if(x==i)
   			   {
			   printf("%d  ",x);
			   break;
			   }
   			else if(x%i==0)
   			   {
   				break;
			   }
		   }
	   }
   }	
}