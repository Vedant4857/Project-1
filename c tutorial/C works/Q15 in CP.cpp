//Develop a program to check whether the number is positive or negative.
#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides:");
	scanf("%d%d%d",&a,&b,&c);
	
	
	
	
	if (a==b && b==c && a==c)
	{
		printf("Triangle is equilateral.");
	}
	else 
	{
		printf("\nTriangle is not equilateral.");
	}
	
	
	if(a==b || b==c || a==c)
	{
		printf("\nTriangle is isosceles");
	}
	else 
	{
		printf("\nTriangle is not isosceles.");
	}
	
	
	
	
    if (a!=b && b!=c && a!=c)
    {
    	printf("\nTriangle is scalene.");
	}
	else
	{
		printf("\nTriangle is not scalene");
	}
	
	
	
	if ((a == sqrt(b*b+c*c)) || (b == sqrt(a*a+c*c)) || (c == sqrt(a*a+b*b))  )
	{ 
	 printf("\nTriangle is right angled.");
	}
	else 
	{
		printf("\nTriangle is not right angled.");
	}
	
	
	return 0;
}
	
	