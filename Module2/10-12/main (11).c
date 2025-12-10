#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if(marks>=70)
    {
        printf("A grade");
    }
    if(marks>=60)
    {
        printf("B grade");
    }
    if(marks>=50)
    {
         printf("C grade");
    }
    if(marks>=40)
    {
         printf("D grade");
    }
    else
    {
        printf("fail");
    }
   
    
    getch();
}