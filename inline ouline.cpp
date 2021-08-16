#include <iostream>

using namespace std;
class aptech
{
        public:
        display()
        {
            cout<<"inline method";
        }
        display1();
};
aptech::display1()
{
    cout<<"outline method";
}

int main()
{
    aptech a;
    a.display();
    a.display1();

    return 0;
}
