#include<iostream>
using namespace std;

class G
{
public:
    void disp1()
    {
        cout<<"hello"<<" ";
    }
};

class B: public G
{
public:
    void disp2()
    {
        cout<<"world"<<" ";
    }
};

class E: public G
{
public:
    void disp3()
    {
        cout<<"bhavya"<<" ";
    }
};

class A: public B
{
public:
    void disp3()
    {
        cout<<"wig"<<" ";
    }
};

class C: public B
{
public:
    void disp4()
    {
        cout<<"aarohi"<<" ";
    }
};

class D: public E
{
public:
    void disp5()
    {
        cout<<"manchanda"<<" ";
    }
};

class F: public E
{
public:
    void disp6()
    {
        cout<<"123"<<" ";
    }
};

int main()
{


}
