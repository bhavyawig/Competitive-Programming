#include<bits/stdc++.h>
using namespace std;

struct abc{
    int item;
    struct abc *next;
};
struct abc *ptr=NULL;
void insertlist(int data,int cnt)
{
    int i;
    struct abc *r,*head,*ptr;
    struct abc* temp=(struct abc*)malloc(sizeof(struct abc));
    r=temp;
    for(i=0;i<1;i++)
    {
        if(cnt==0){
        head=temp;
        cnt++;
        }
    }
    temp->item=data;
    temp->next=NULL;
    if(ptr!=temp)
    {
        temp->ptr=r;
    }
    ptr=temp;
}
int main()
{
    int t,count=0;
    cin>>t;
    int i,a;
    for(i=0;i<t;i++)
    {
        cin>>a;
        insertlist(a,count);
    }
     int *pe;
        pe=head;
    while(pe!=NULL)
    {
        cout<<pe->item<<endl;
        pe = pe->next;
    }

    return 0;
}
