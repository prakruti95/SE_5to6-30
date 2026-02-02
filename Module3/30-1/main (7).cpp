#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch[]="mango";
    char ch2[50]="";
    
   do
   {
       cout<<"What is your fav. fruit?";
       cin>>ch2;
   }
   while(strcmp(ch,ch2)!=0);
    
    cout<<"Answer is correct!!"<<endl;  
    
    
    return 0;
}