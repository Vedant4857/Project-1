#include<stdio.h>
#include<conio.h>
int main()
{
	int num,e,w,d,x,c,y,b,z,a,F;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	//separating digits from back
	e = num%10;
	w = num/10;
	d = w%10;
	x = num/100;
	c = x%10;
	y = num/1000;
	b = y%10;
	z = num/10000;
	a = z%10;
	
	F = e*10000 + d*1000 + c*100 + b*10 + a*1;
	printf("Reverse = %d",F);
	
	if (num == F)
	{
		printf("\n%d and its reverse are same",num);
	}
	else
	{
		printf("\nReverse are not same");
	}
	return 0;
}