#include <iostream>
#include <vector>
using namespace std;
//given array is sorted
//2 pointer approch follow 
//one variable start 

vector<int> pairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;

        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
    

}
int main(){
    vector<int>nums={2,4,7,9,11};
    int target;
    cout<<"Enter target sum two see index pair of array:-";
    cin>>target;
    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<","<<ans[1];
}
