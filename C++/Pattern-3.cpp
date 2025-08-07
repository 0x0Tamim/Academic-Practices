#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int  num = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<char(65+num);
            num++;
        }
        cout<<endl;
    }


}
