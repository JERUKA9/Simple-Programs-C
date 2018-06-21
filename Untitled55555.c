#include<stdio.h>

int main()
{

int marks[10],i,n,sum =0;
printf("enter number of subjects\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter marks of subject%d:\t",i+1);
    scanf("%d",&marks[i]);
    sum+=marks[i]+sum;

}
printf("sum=%d",sum);


return 0;

}
