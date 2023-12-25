#include<stdio.h>
int main()
{
    int a,b,c,d,a1[50][50],a2[50][50],a3[50][50],i,j,k,m,n;
    printf("Enter the rows and column for first matrix: ");
    scanf("%d%d",&a,&b);

    printf("Enter the rows and column for second matrix: ");
    scanf("%d%d",&c,&d);

    if(b!=c)
    {
        printf("Invalid matrix");
    }

    printf("\nEnter the the value for first matrix: ");
    for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
      {
        scanf("%d",&a1[i][j]);
      }
    }

    printf("\nEnter the the value for second matrix: ");
    for(m=0;m<c;m++)
    {
      for(n=0;n<d;n++)
      {
        scanf("%d",&a2[i][j]);
      }
    }

   printf("\nTheir Multiplication: ");
    for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
      {
        scanf("%d",&a1[i][j]);
      }
    }









}