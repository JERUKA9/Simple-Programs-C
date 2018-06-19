#include<stdio.h>
int main()
{
int num1, num2,sum,sub1,a;
printf("enter 1 for addition, enter 2 for substraction");
scanf("%d",&a);
printf("enter two values:");
scanf("%d %d",&num1,&num2);
if(a==1){
    sum=add(num1,num2);
    printf("adition =%d",sum);
}
if(a==2){
    sub1=sub(num1,num2);
    printf("sub =%d",sub1);

}
else if(a>2)
    printf("entered number is not in the range specified");


printf("sum = %d\n substraction result =%d",sum,sub1);
return 0;


}
int add(int a , int b){
int add;
add=a+b;
return add;

}
int sub(int a , int b){
int result;
result=a-b;
return result;



}
