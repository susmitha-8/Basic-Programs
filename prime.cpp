// prime number or not
#include <iostream>
using namespace std;
int main()
{
   int n, i,c= 0;
    cin>>n;
    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            c = 1;
            break;
        }
    }

    if (n == 1) 
        cout<<"1 is not prime nor composite";
    else if(c==0)
        cout<<"prime number";
    else
        cout<<"not prime number";

}
