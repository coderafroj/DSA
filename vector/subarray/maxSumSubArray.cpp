#include <iostream>
using namespace std;
int main(){
    const int size=5;
    int arr[size]={-4,5,-2,7,1};
    int maxSum=INT_MIN;
    for(int start=0;start<size;start++){
        int currentSum=0;
        for(int end=start;end<size;end++){
            currentSum=currentSum+arr[end];
            maxSum=max(maxSum,currentSum);

        }
    }
    cout<<"maximum sum of subarray is :- " <<maxSum;
}