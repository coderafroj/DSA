#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={5,7,6,4,3,5,6,7,3};
    int ans=0;
    for(int a:arr){
        ans=ans^a;
    }
    cout<<"single number is-"<<ans<<endl;
}
