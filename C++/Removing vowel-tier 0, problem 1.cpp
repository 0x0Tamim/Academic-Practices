#include<iostream>
#include<string>
using namespace std;
int main(){
string output = "";
string S;
getline(cin,S);

for(int i = 0;i < S.length();i++){

    if(S[i] !='a' && S[i] != 'e' && S[i]!='i' && S[i] != 'o' && S[i]!= 'u' )
    {
        output=output+S[i];
    }


}

cout<<output<<endl;

return 0;

}
