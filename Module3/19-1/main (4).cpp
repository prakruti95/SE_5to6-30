#include <iostream>
using namespace std;
class Emp
{
    public:
    string name;
    int salary;
    
    void display()
    {
        if(salary>=50000)
        {
            cout<<"Good";
        }
          if(salary>=40000)
        {
            cout<<"Average";
        }
          if(salary>=30000)
        {
            cout<<"below Average";
        }
          if(salary>=20000)
        {
            cout<<"OK";
        }
        else
        {
            cout<<"bad";
        }
        
        //cout<<name<<" "<<salary<<endl;
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
    
    
    e1.name=name1;
    e1.salary=salary1;
    
   e1.display();
    
    
    
    return 0;
}