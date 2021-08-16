#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b;
    cin>>i;
    if(i>=0 && i<=9)
    {
        if(i==0){
            cout<<"zero";
        }
        else if(i==1){
            cout<<"one";
        }
        else if(i==2){
            cout<<"two";
        }
                else if(i==3){
            cout<<"three";
        }
        else if(i==4){
            cout<<"four";
        }
        else if(i==5){
            cout<<"five";
        }
        else if(i==6){
            cout<<"six";
        }
        else if(i==7){
            cout<<"seven";
        }
        else if(i==8){
            cout<<"eight";
        }
        else if(i==9){
            cout<<"nine";
        }

    }
    else if(i%10==0)
    {
        if(i==10)
        {
            cout<<"ten";
        }
        else if(i==20)
        {
            cout<<"twenty";
        }
        else if(i==30){
            cout<<"thirty";
        }
        else if(i==40){
            cout<<"forty";
        }
        else if(i==50){
            cout<<"fifty";
        }
        else if(i==60){
            cout<<"sixty";
        }
        else if(i==70){
            cout<<"seventy";
        }
        else if(i==80){
            cout<<"eighty";
        }
        else if(i==90){
            cout<<"ninety";
        }
    }
    else if(i>=11 && i<=19){
        if(i==11){
            cout<<"eleven";
        }
        else if(i==12){
                cout<<"twelve";
                }
          else if(i==13){
                cout<<"thirteen";
                }
          else if(i==14){
                cout<<"fourteen";
                }
          else if(i==15){
                cout<<"fifteen";
                }
                  else if(i==16){
                cout<<"sixteen";
                }
              else if(i==17){
                cout<<"seventeen";
                }
                  else if(i==18){
                cout<<"eighteen";
                }
                  else if(i==19){
                cout<<"nineteen";
                }

    }
    else if(i>=21 && i<=99)
    {
        a=i;
        b=a%10;
        a=a/10;

        if(a==2){
            cout<<"twenty-";
        }
        else if(a==3){
            cout<<"thirty-";
        }
        else if(a==4){
            cout<<"forty-";
        }
        else if(a==5){
            cout<<"fifty-";
        }
        else if(a==6){
            cout<<"sixty-";
        }
       else  if(a==7){
            cout<<"seventy-";
        }
        else if(a==8){
            cout<<"eighty-";
        }
        else if(a==9){
            cout<<"ninety-";
        }




        if(b==1){
            cout<<"one";
        }
        else if(b==2){
            cout<<"two";
        }
        else if(b==3){
            cout<<"three";
        }
        else if(b==4){
            cout<<"four";
        }
        else if(b==5){
            cout<<"five";
        }
        else if(b==6){
            cout<<"six";
        }
        else if(b==7){
            cout<<"seven";
        }
        else if(b==8){
            cout<<"eight";
        }
        else if(b==9){
            cout<<"nine";
        }




    }

    return 0;

}
