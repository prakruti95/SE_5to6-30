#include<iostream>
using namespace std;
class Student
{
    //global
    public:
    int id=0;
    string name="";
    
    //this keyword it will be use for refrence passing
    Student(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main()
{
    Student s1 = Student(101,"a");
    Student s2 = Student(102,"p");
    
    s1.display();
    s2.display();
   
    
    
    return 0;
}