#include<iostream>
using namespace std;
class bhavya
{
    public:
    bhavya()
    {
        int a=3;
        int b=2;
    }

    void disp()
    {
        cout<<a+b;
    }
};
class wig: public bhavya
{

};
int main()
{

    wig obj;
    obj.disp();
    return 0;
}
