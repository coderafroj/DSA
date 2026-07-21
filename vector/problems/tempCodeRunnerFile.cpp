#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>nums={5,4,7,8,3,9,6};
    int n=nums.size();
    vector<int>ans(n);
    vector<int>prefix(n);
    vector<int>suffix(n);
    //prefix
    
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    //suffix
    for(int i=n-1;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    //ans
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
        cout<<ans[i]<<" ";

    }

}