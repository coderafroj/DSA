#include <iostream>
#include <vector>
using namespace std;
int main(){
    int count=0;int candidate=0;
    vector<int>nums={4,5,3,3,7,4,6,4,4,3,4,4,3,3,3};
    for(int n:nums){
        if(count==0){
            candidate=n;
        }
        count=+(n==candidate)? 1:-1;
         
    }
    cout<<candidate;
}