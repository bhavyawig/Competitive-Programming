#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define MAX_SIZE 5
using namespace std;

int stack[MAX_SIZE];
void push(int a);
int pop();
void traverse();
int is_empty1();
int top_element();
int top =-1;
int p;
int search1();

int main()
{
   int element,choice;
   while(1)
   {
      cout<<"Stack Operations.\n";
      cout<<"1. Insert into stack (Push operation).\n";
      cout<<"2. Delete from stack (Pop operation).\n";
      cout<<"3. Print top element of stack.\n";
      cout<<"4. Check if stack is empty.\n";
      cout<<"5. Traverse stack.\n";
      cout<<"6. enter index to search value.\n";
      cout<<"7. Exit.\n";
      cout<<"Enter your choice.\n";
      cin>>choice;

      switch ( choice )
      {
	 case 1:
	    if ( top == MAX_SIZE - 1 )
		  cout<<"Error: Overflow\n\n";
	    else
	    {
	       cout<<"Enter the value to insert.\n";
	       cin>>element;
	       push(element);
	    }
	    break;

	 case 2:
	    if ( top == -1 )
	       cout<<"Error: Underflow.\n\n";
	    else
	    {
	       element = pop();
	       cout<<"Element removed from stack is \n"<< element;
	    }
	    break;

	 case 3:
	    if(!is_empty1())
	    {
	       element = top_element();
	       cout<<"Element at the top of stack is \n\n"<< element;
	    }
	    else
	       cout<<"Stack is empty.\n\n";
	    break;

	 case 4:
	    if(is_empty1())
	       cout<<"Stack is empty.\n\n";
	    else
	       cout<<"Stack is not empty.\n\n";
	    break;

	 case 5:
	    traverse();
	    break;

     case 6:
        search1();
        break;

	 case 7:
	    exit(0);
      }
   }
}

void push(int a)
{
   top++;
   stack[top] = a;
}

int pop()
{
   int element;

   if ( top == -1 )
      return top;

   element = stack[top];
   top--;

   return element;
}

void traverse()
{
   int d;

   if ( top == - 1 )
   {
      cout<<"Stack is empty.\n\n";
      return;
   }

   cout<<"There are elements in stack.\n"<<top+1;

   for ( d = top ; d >= 0 ; d-- )
      cout<<"\n"<< stack[d];
   cout<<"\n";
}

int is_empty1()
{
   if ( top == - 1 )
      return 1;
   else
      return 0;
}
int search1()
{
    if(top==-1)
        return 1;
    else{
        cout<<"value of index ";
        cin>>p;
        cout<<stack[p];
    }

}

int top_element()
{
   return stack[p];
}
