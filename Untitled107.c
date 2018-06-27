#include<stdio.h>


int main()
{
int *pc,c;
c=22;
printf("addres of c:%d\n",&c);
printf("value of c:%d\n",c);
pc=&c;
printf("addres of pc:%d\n",pc);
printf("content of c:%d\n",*pc);
c=11;
printf("addres of pc:%d\n",pc);
printf("content of c:%d\n",*pc);
*pc=2;
printf("addres of c:%d\n",&c);
printf("value of c:%d\n",c);
return 0;




}
