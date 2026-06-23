#include <iostream>
#include <vector>

//subarray is a part of array
//total subarray is equal to n*(n+1)/2
using namespace std;
int main(){
    int n=7;
    vector<int>num={3,5,4,6,2,8,7};
    for(int start=0;start<n;start++){
        for(int end=0;end<n;end++){
            for(int i=start;i<end+1;i++){
                cout<<num[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

}

