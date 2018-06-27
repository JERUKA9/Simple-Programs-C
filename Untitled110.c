#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    char *a;
    a=calloc(20, sizeof(char));
    if(a==NULL)
    {

        printf("couldnt able to allocate requested memory");
    }
    else
    {
        strcpy(a,"dynamic memory allocation");
    }

printf("dynamiclly allocated memory content:%s\n",a);
free(a);
a=realloc(a ,100 * sizeof(char));
    if(a==NULL)
    {

        printf("couldnt able to allocate requested memory");
    }
    else
    {
        strcpy(a,"dynamic memory allocation");
    }

printf("dynamiclly allocated memory content:%s\n",a);
free(a);




 return 0;

}
