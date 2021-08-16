#include <iostream>
class aptech
{
    public:
    void sum(int a,int b)
    {
        cout<<a+b;
    }
    void sum(int a,int b,int c)
    {
        cout<<a+b+c;
    }
    void sum(int a,int b,int c,int d)
    {
        cout<<a+b+c+d;
    }
};

int main() {
    // Write C++ code here
  int ch,p,q,r,s;
  aptech a;
  cout<<"enter 1 for 2 number sum\nEnter 2 for 3 number sum\nEnter 3 for 4 number sum\nEnter your choice=";
  cin>>ch;
  switch(ch)
  {
      case 1:

cout<<"Enter two no=";
            cin>>p>>q;
            a.sum(p,q);
            break;
        case 2:
            cout<<"Enter three no=";
            cin>>p>>q>>r;
            a.sum(p,q,r);
            break;
        case 3:
            cout<<"Enter four no=";
            cin>>p>>q>>r>>s;
            a.sum(p,q,r,s);
            break;
        default:
                cout<<"invalid choice";
                break;
  }

    return 0;
}
