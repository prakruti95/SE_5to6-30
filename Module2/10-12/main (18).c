#include<stdio.h>
#include<conio.h>
void main()
{
    int bill =0,num,quan=1,finalqua;
   
    printf("Enter any num");
    scanf("%d",&num);
    
    printf("enter quantity");
    scanf("%d",&quan);
    
    
    switch(num)
    {
        case 1:
        finalqua = quan*100;
        bill+=finalqua;
        break;
        
        case 2:
        finalqua = quan*70;
         bill+=finalqua;
        break;
        
        case 3:
        finalqua = quan*120;
         bill+=finalqua;
        break;
      
        
        
        
        
    }
      
        printf("Your bill is %d ",bill);
  
    getch();
}