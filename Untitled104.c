#include<stdio.h>
void Display(char ch[]);
int main()
{
    char c[50];
    printf("enter string:");
    gets(c);
    Display(c);

return 0;

}
void Display(char ch[]){
printf("string output:");
puts(ch);


}
