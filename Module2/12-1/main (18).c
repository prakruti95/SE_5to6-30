#include <stdio.h>

int main() 
{
    int n = 0;  
    if (n == 0)
    goto tops;
    printf("You entered: %d\n", n);

tops:
    printf("Exiting the program.\n");
    
    return 0;
}