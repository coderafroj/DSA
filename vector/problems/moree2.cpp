#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>nums={4,6,7,4,5,6,3,4,4,4};
	int freq=0,ans=0;
	for(int num:nums){
		if(freq==0){
			ans=num;
		}
		if(ans==num){
			freq++;
		}
		else{
			freq--;
		}
	}
	cout<<"majority element is "<<ans;
}
