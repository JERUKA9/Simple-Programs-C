#include<stdio.h>

int main()
{

    int a,b;

    printf("enter a= \n");
    scanf("d",&a);
    printf ("enter b= \n");
    scanf("%d",&b);

     b=b-a;
     a=a+b;
     b=a-b;


    printf("a=%d\n b=%d",a,b);


    return 0;
}
