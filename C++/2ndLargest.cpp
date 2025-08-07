#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
     if (n < 2)
        return -1;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int first=arr[0],second=-1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }

        else if(arr[i]>second && arr[i]!=first)
        {
            second = arr[i];
        }

    }

    cout<<"Second largest element:"<<second;


}
