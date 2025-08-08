#include<iostream>
#define max 100
using namespace std;
int main()
{
    int n, a[max],ans,Max = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {

        cin>>a[i];

    }
    Max = a[1];
    for(int i = 2; i<n; i++)
    {
       if (a[i]>Max)
        {
            Max = a[i];

        }
    }
 ans = Max - a[0]+1;
 if (ans<=0)
    ans = 0;
    cout<<ans;
    return 0;
}
