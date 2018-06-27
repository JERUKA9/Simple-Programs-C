#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
}record;
int main()
{


    record.id=1;
    strcpy(record.name,"Tom");
    record.percentage=86.5;

    printf("Id is %d \n",record.id);
    printf("Name is %s",record.name);
    printf("percentage is %f\n",record.percentage);
    return 0;

}
