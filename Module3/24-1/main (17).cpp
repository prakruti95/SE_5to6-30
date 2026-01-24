#include<iostream>
using namespace std;

class A
{
    public:
    void a()
    {
        cout<<"A called";
    }
};
class B : public A
{
    public:
    void b()
    {
        cout<<"B called";
    }
};
class C : public B
{
    public:
    void c()
    {
        cout<<"C called";
    }
};

int main()
{
    C c;
    c.a();
    c.b();
    c.c();

    return 0;
}