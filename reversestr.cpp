// reverse string
#include <iostream>
using namespace std;
int main()
{
   string s,n="";
   int i;
   // enter string to be checked
   cin>>s;
   for(i=s.size()-1;i>=0;i--)
   {
       n=n+s[i];
   }
   cout<<n;
}