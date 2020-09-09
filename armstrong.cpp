
//armstrong number or not
#include <iostream>

using namespace std;

int main()
{
   int n,r,temp,sum=0;
   // enter number to be checked
   cin>>n;
   temp=n;
   while(n!=0)
   {
       r=n%10;
       sum=sum+r*r*r;
       n=n/10;
       
   }
   n=temp;
   if(sum==n)
        cout<<"armstrong number";
    else
        cout<<"not armstrong";
}
