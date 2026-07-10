#include <iostream>
using namespace std;
int main(){
    int arr[]={5,-6,7,4,3,-8};
    int maxSum=INT_MIN,currentSum=0;
    for(int i=0;i<6;i++){
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0){
            currentSum=0;
        }

    }
    cout<<maxSum;

}