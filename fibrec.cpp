// fibanocci using recursion
#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i=0;
    cin>>n;
    while(i<n)
    {
        cout<<fib(i)<<endl;
        i++;
    }
}