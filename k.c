#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,k,sum=0;
printf("enter the integers");
scanf("%d%d",&n,&k);
for(i=5;i<=n;i++)
{
printf("%d",i);
}
for(j=9;j<=k;j++)
{
sum=sum+j;
}
printf("the sum of %d integers",sum);
return0;
}
