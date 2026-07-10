#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={5,4,3,2,3,5,4};
    int ans=0;
    for(int a:arr){
        ans=ans^a;

    }
    cout<<"single number is:"<<ans;
}


