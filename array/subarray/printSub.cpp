#include <iostream>
using namespace std;
int main(){
	int n=5;
	int arr[n]={4,7,6,8,9};
	for(int start=0;start<n;start++){
		for(int end=start;end<n;end++){
			for(int a=start;a<=end;a++){
				cout<<arr[a];
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
