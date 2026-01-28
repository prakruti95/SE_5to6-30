#include<iostream>
using namespace std;

class Cal
{
    public:
    int count(int a,int b)
    {
        return a+b;
    }
    double count(double a,double b)
    {
         return a*b;
    }
};

int main()
{
      Cal c;
      
      cout<<c.count(2,3)<<endl;
      cout<<c.count(2.00,3.00)<<endl;

    return 0;
}