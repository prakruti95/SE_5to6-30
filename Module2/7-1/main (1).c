#include <stdio.h>

int main()
{
    char a='b';
    char *ptr;
 
    printf("%c \n",a);
    ptr=&a;
    printf("%p \n",ptr);
    
    *ptr='d';
    
    printf("%c \n",*ptr);
     
    return 0;
}
