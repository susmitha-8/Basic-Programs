//LCM of two numbers
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,least;
    cin>>n1>>n2;
    least=(n1>n2)?n1:n2;
    while(1)
    {
        if(least%n1==0 && least%n2==0)
        {
            cout<<least;
            break;
        }
        ++least;
    }
}