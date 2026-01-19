#include <iostream>
using namespace std;
class Emp
{
   public:
    void display(string n,int s)
    {
       if(s>=50000)
       {
           cout<<"Good";
       }
       else if(s>=40000)
       {
           cout<<"Average";
       }
       else if(s>=30000)
       {
           cout<<"below average";
       }
       else
       {
           cout<<"Bad";
       }
       //cout<<n<<" "<<s<<endl;
    }
};

int main() 
{
    Emp e1;
    string name1;
    int salary1;
    
    cout<<"Enter Your Name";
    cin>>name1;
    
    cout<<"Enter Your Salary";
    cin>>salary1;
    
    e1.display(name1,salary1);//parameters
    
    
    
    return 0;
}