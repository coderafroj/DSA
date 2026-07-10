#include <iostream>
#include <vector>

using namespace std;

int frequency(vector<int>nums,int search){
    int n=nums.size();
    int count=0;
    for(int i:nums){
        if(i==search){
            count++;
        }
    }
        
    
    return count;
}
int main(){
    vector<int> n={1,2,3,5,4,3,2,2,1,5};
    int target=2;
    cout<<frequency(n,target);
}