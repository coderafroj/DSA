#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,3,4,9,2};
    int n=8;
    int maxSum=INT_MIN;
    
    for(int start=0;start<n;start++){
        int cr=0;
        for(int end=start;end<n;end++){
            cr=cr+arr[end];
            maxSum=max(cr,maxSum);
            
        }
        
    }
    cout<<"maximu numberis: "<<maxSum;
}