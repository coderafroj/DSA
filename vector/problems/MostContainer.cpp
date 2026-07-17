#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> height={4,6,3,8,2,9,5,6};
	int n=height.size();
	int maxWater=0,lineHeight=0,width;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			width=j-i;
			lineHeight=min(height[i],height[j]);
			int area=width*lineHeight;
			maxWater=max(area,maxWater);


		}
	}
	cout<<"maximum water is "<<maxWater;
	
}