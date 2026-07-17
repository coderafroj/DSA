#include <climits>
#include <iostream>
using namespace std;
int main(){
		
	int n=5;
	int maxSum=INT_MIN;
	int arr[n]={4,7,6,8,9};
	for(int start=0;start<n;start++){
		int currentSum=0;
		for(int end=start;end<n;end++){
			currentSum+=arr[end];
			maxSum=max(currentSum,maxSum);
			
			
		}
	}
	cout<<"sum of maximum subarray is:-"<<maxSum;
}
