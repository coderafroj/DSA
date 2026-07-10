#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;

}
int main(){
    vector<int>nums={4,6,9,3,10};
    int target=13;
    vector<int>r=pairSum(nums,target);
    if(r.empty()){
        cout<<"not match pair";
    }
    for(int i:r){
        cout<<i<<" ";
    }
}