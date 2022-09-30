#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

class node
{
    public:
    int val;
    node *next;
};
node* head=NULL;
node* kro=NULL;
void insert(int numb)
{
    kro = new node();
    kro->val=numb;
    kro->next=head;
    head=kro;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}

int main()
{

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print(head);
    return 0;
}


