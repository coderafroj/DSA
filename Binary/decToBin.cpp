#include <iostream>

using namespace std;

int main(){
int n;
	int bin=0;
	int pow=1;
	int rem;
	cout<<"Enter decimal to binary:-";
	cin>>n;
	while(n!=0){
		rem=n%2;
		n=n/2;
		bin=bin+(rem*pow);
		pow*=10;
		
	}
	cout<<bin<<" ";
}
