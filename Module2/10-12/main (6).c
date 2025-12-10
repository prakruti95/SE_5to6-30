#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
  
    
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);
    
    int add = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    
    printf("addition is %d ",add);
     printf("substraction is %d ",sub);
      printf("multiplication is %d ",mul);
       printf("division is %d ",div);
    
    getch();
}