#include <iostream>
using namespace std;

void reverse(int num[],int n){
	int start=0,end=n-1;
	for(int i=0;i<n/2;i++){
		swap(num[start],num[end]);
		start++;
		end--;		
		
	}
	
}
int main(){
const int n=5;
int a[n]={3,4,5,2,5};
reverse(a,n);
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}

	
}
