#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,7,2,7,81,23,25,6};
    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}