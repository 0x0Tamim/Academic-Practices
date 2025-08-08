
#include<iostream>
using namespace std;
int main()
{
    const double price_per_small_room {25.0};
    const double price_per_large_room{35.0};
    const double tax {.06};
    int smallRoom,largeRoom;
    cout<<"Hello, Welcome to Tamim's carpet cleaning service\n";
    cout<<"How many small rooms would you want to cleaned?";
    cin>>smallRoom;
    cout<<"How many large rooms would you want to cleaned?";
    cin>>largeRoom;
    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Numer of small rooms:"<<smallRoom<<endl<<"Numer of large rooms:"<<largeRoom<<endl;
    cout<<"Price per small room:"<<price_per_small_room<<" tk"<<endl;
    cout<<"Price per large room:"<<price_per_large_room<<" tk"<<endl;
    cout<<"Cost :"<<smallRoom*price_per_small_room+largeRoom*price_per_large_room<<" tk"<<endl;
    cout<<"Tax : "<<(smallRoom*price_per_small_room+largeRoom*price_per_large_room)*.06<<"tk"<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Total estimate :"<<(smallRoom*price_per_small_room+largeRoom*price_per_large_room)+((smallRoom*price_per_small_room+largeRoom*price_per_large_room)*.06)<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
}
