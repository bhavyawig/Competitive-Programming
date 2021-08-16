#include<iostream.h>
#include<conio.h>
using namespace std;

struct A{
    int item;
    node *next;
};

void insert(int data)
{
    node *head,temp,*ptr,*p;
    int i;

        head=null;
        temp =(node)malloc(sizeof(struct A));
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
    int n;
    cin>>n;
    int a[n];
    A obj;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
        obj.insert(a[i]);
    }
    while(p!=null)
    {
        cout<<p->item<<endl;
        p=p->next;
    }
   return 0;
}
