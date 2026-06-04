#include <iostream>

using namespace std;

int main(){
int n;
	int bin=0;
	int pow=1;
	int rem;
	cout<<"Enter decimal to binary:-";
	cin>>n;
	if(n==0){
		cout<<0;
		return 0;
	} 
	while(n!=0){
		rem=n%2;
		n=n/2;
		bin=bin+(rem*pow);
		pow*=10;	
	}
	cout<<bin<<" "; 
}
// 1010
// 0x1+2x1+4x0+8x1=0+2+0+8=10
