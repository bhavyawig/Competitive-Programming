#include<bits/stdc++.h>
using namespace std;

struct abc{
    int item;
    struct abc *next;
};

struct abc *front=NULL,*rear=NULL;
 struct abc *head;

void linkqueue(int data,int t1)
{

    int i;
   struct abc *temp=(struct abc*)malloc(sizeof(struct abc));
    if(front==NULL)
    {
        temp->item=data;
        rear=temp;
        front=temp;
        head=temp;
    }
    else{

         temp->item=data;
         rear->next=temp;
         rear=temp;
    }




}

int main()
 {
     int t;
     cout<<"no of elements to add";
     cin>>t;
     int i,a;

     for(i=0;i<t;i++)
     {
         cin>>a;
         linkqueue(a,t);
     }
     struct abc *p;
     while(head!=NULL )
     {
         cout<<head->item<<endl;
         head=head->next;
         }

     return 0;
 }
