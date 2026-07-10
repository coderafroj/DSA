#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={4,5,3,2,3,2,3,1,1,1,1};
    int freq=0;
    int majorty;
    int n=nums.size();
    for(int val:nums){
        for(int el:nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){

            majorty=val;
        }
        
    }
    cout<<"majorty element is: "<<majorty;
}