#include<stdio.h>


int main()
{
char c;
printf("enter an alphabet");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("%c is a vovel");
else
    printf("%c is a constant",c);


return 0;

}
