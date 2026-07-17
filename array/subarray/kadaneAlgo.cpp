#include <climits>
#include <iostream>
using namespace std;
int main(){
	int arr[]={6,5,4,3,7,2,8};
	int currSum=0,maxSum=INT_MIN;
	for(int i=0;i<7;i++)
	{
		currSum+=arr[i];
		maxSum=max(currSum,maxSum);
	}
	cout<<"maximum number of subbarray: "<<maxSum;
	
}
