// palindrome or not
#include <iostream>

using namespace std;

int main()
{
   int n,q,r,rev=0;
   // enter number to be checked
   cin>>n;
   q=n;
   while(q!=0)
   {
       r=q%10;
       rev=rev*10+r;
       q=q/10;
   }
   if(rev==n)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}
