#include<stdio.h>
struct student{

char name[50];
int roll;

};
void Display(struct student stu);
int main(){
struct student s1;
printf("enter name");
scanf("%s",&s1.name);
printf("enter roll number");
scanf("%d",&s1.roll);
Display(s1);
return 0;

}
void Display(struct student stu){
printf("Output name %s",stu.name);
printf("Roll%d",stu.roll);

}
