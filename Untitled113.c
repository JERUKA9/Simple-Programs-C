#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name;
    float percentage;

};


int main()
{

    struct student record ={1,"john",90.5};
    struct student *ptr;
    ptr=&record;
    printf ("id is %d",ptr->id);
    printf("name is %s",ptr->name);
    printf("percentage is %f",ptr->percentage);

 return 0;

}
