#include <stdio.h>

int main()
{
    
    int i,j,num;
    char c='A';
    
    printf("enter num: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
            
            printf("%c",c);
          
            
        }
         c++;
        printf("\n");
        
    }

    return 0;
}
