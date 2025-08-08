#include<iostream>
#include<cmath>
using namespace std;
int main(){

int n;
cout<<"Input a number in decimal:";
cin>>n;
int ans=0,i=0;
while(n!=0){
    int bit = n & 1;
    ans = (bit * pow(10,i))+ans;
    n = n>>1;
    i++;
}

cout<<"The number in binary is "<<ans;

return 0;

}
