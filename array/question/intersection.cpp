#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,4,5,6,2};
    int arr1[5]={3,9,5,7,2};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}