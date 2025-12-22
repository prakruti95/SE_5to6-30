#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[10] = "mango";
    char ch2[10]="";
    
    do
    {
        printf("What is your fav. fruit?");
        scanf("%s",&ch2);
    }
    while(strcmp(ch2,ch)!=0);
    
    printf("Answer is Correct");
   
    
 getch();
}
