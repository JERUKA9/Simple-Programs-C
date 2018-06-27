#include<stdio.h>
enum week {sunday,monday,tuesday,wensday,thursday,friday,saturday};

int main()
{

enum week today;
today = wensday;
printf("this is %dth day of the week",today+1);

 return 0;

}
