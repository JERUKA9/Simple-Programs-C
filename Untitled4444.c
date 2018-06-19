#include<stdio.h>


int main()
{
  int dividend,divisor,quontient,remainder;

  printf("enter dividend:");
  scanf("%d",&dividend);
  printf("enter the divisior:");
  scanf("%d",&divisor);
  quontient=dividend/divisior;
  remainder=dividend%divisor;
  printf("quontient = %d\nremainder=%d",quontient,remainder);


retrun 0;

}
