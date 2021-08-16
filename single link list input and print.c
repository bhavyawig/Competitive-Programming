#include<bits/stdc++.h>
using namespace std;

struct A{
    int item;
    A *next,*p;
}obj;

void insert(int data)
{
    A *head,*temp,*ptr;
    int i;

        head=NULL;
        temp =(A)malloc(sizeof(struct A));
        const p=temp;
        temp->item=data;
        temp->next=head;
        if(temp!=ptr)
        {
            temp->ptr=temp;
        }
        else
        {

        }
        ptr=temp;


}


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    A obj;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
        insert(a[i]);
    }
    while(p!=null)
    {
        cout<<p->item<<endl;
        p=p->next;
    }
   return 0;
}
