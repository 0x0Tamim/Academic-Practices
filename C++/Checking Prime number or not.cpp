#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,c=0,i;
    cin>>n;
    if(n<=1)
    {
        cout<<" It is not a prime number";
    }
    else
    {
        for( i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
                c++;
        }


        if(c==0)
        {
            cout<<"It is a Prime number ";
        }
        else cout<<"It is not a Prime number ";
    }
}
