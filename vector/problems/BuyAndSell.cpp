#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> prices={3,5,6,2,8,1,3,6,9};
    int maxProfit=0;
    int bestBuy=prices[0];
    for(int i=0;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit=max(bestBuy,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
        



    }
    cout<<"maximum price is "<<maxProfit;
}