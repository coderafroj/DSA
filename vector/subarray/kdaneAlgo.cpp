#include <iostream>
using namespace std;
int main(){
    int arr[]={5,-3,7,2,1};
    int currentSum=0,maxSum=INT_MIN;
    for(int i=0;i<5;i++){
        currentSum+=arr[i];
        maxSum=max(maxSum,currentSum);
        if(currentSum<0){
            currentSum=0;
        }

    }
    cout<<"maximum numbr of subarray is "<<maxSum;
}