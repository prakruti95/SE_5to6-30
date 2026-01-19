#include <iostream>
using namespace std;

class Student
{
    //data memebers
    public:
    int id;
    string name;
};

int main()
{
    //object creation
    Student s1;
    Student s2;
    
    //value assign
    s1.id=101;
    s1.name = "nandan";
    
    s2.id=102;
    s2.name="akash";
    
    //value print
    cout<<s1.id<<" "<<s1.name<<endl;
    cout<<s2.id<<" "<<s2.name<<endl;
    

    return 0;
}