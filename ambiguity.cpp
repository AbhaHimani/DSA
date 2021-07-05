#include <iostream>
#include <string>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you";
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?";
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};
class B
{
public:
    void say()
    {
        cout << "Hello World";
    }
};
class D : public B
{
    int a;

public:
    void say()
    {
        cout << "hello my bful people";
    }
};

int main()
{
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    D d;
    B b;
    d.say();
    b.say();

    return 0;
}