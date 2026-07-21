#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> waterConHeight={4,3,6,7,1,2,8,4,3,6};
    int maxWater=0;
    int lp=0,rp=waterConHeight.size()-1;
    while(lp<rp){
        int w=rp-lp;
        int h=min(waterConHeight[lp],waterConHeight[rp]);
        int area=w*h;
        maxWater=max(area,maxWater);
        waterConHeight[lp]<waterConHeight[rp]?lp++:rp--;
    }
    cout<<"max water is "<<maxWater;

    
}