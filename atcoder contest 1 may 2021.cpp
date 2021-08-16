#include<iostream>
int main()
{
     int i,count=0;
     char a[12];
     for(i=0;i<12;i++)
     {
         std::cin>>a[i];
     }
     for(i=0;i<12;i++)
     {
         if(a[i]==90)
         {
             if(a[i+1]==79)
             {
                 if(a[i+2]==78)
                 {
                     if(a[i+3]==101)
                     {
                         count++;
                     }
                 }
             }
         }
     }
     std::cout<<count;
}
