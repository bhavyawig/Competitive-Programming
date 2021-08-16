// to take up an araay from user
// pass this array through a function
// then take pointer and modifiy it (call by reference)
// and print in main
#include<stdio.h>
int modify(int*);
int main()
{
int a[10],i;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
modify(a);
for(i=0;i<10;i++)
{
	printf("\n%d",a[i]);
}
return 0;
}

 modify(int *ptr)
{
int i;
for(i=0;i<10;i++)
  {
	*(ptr+i)=*(ptr+i) *3;
  }
}

