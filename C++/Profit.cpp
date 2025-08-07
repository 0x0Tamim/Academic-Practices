#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int min=prices.at(0);
    int max=0;
    int minIndx;
    for(int i = 0; i<prices.size(); i++)
    {
        if(prices.at(i)<min)
        {
            min = prices.at(i);
            minIndx=i;
        }
    }
    if(min==prices.at(prices.size()-1))
    {
        return 0;
    }
    for(int i = minIndx+1; i<prices.size(); i++)
    {
        if(prices.at(i)>min)
        {
            max = prices.at(i);
        }
    }


    return max-min;
}
int main()
{
    vector<int>vec= {7,1,5,3,6,4};
    int profit = maxProfit(vec);
    cout<<profit;



}
