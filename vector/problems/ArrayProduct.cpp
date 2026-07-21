#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> nums={5,3,2,6};
    vector<int> ans(nums.size(),1);
    for(int i=0;i<nums.size();i++){
        
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                ans[i]*=nums[j];

            }

        }
        
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    


    
}