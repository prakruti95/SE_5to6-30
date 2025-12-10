#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    
    printf("Enter Character");
    scanf("%c",&ch);
    
    //vowel cosonant
    
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("It'a vowel");
    }
    else
    {
         printf("It'a consonant");
    }
    
    getch();
}