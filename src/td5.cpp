#include <iostream>

using namespace std;

class Z
{
public:
    virtual void f(void)
    {
        cout << "Z" << endl;
    }
};

class B : public Z
{
public:
    void f(void)
    {
        cout << "B" << endl;
    }
};

class C : public Z
{
public:
    virtual void f(void)
    {
        cout << "C" << endl;
    }
};

class D : public Z
{
public:
    void f(void) override
    {
        cout << "D" << endl;
    }
};

class E : public Z
{
public:
    virtual void f(void) override
    {
        cout << "E" << endl;
    }
};

class F : public E
{
public:
    virtual void f(void) override
    {
        cout << "F" << endl;
    }
};

int main()
{
    Z *p = new Z();
    p->f();

    p = new B();
    p->f();

    p = new C();
    p->f();

    p = new D();
    p->f();

    p = new E();
    p->f();

    p = new F();
    p->f();
}