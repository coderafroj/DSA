#include <iostream>
using namespace std;
int main(){
    int arr[10]={3,4,5,6,10,7,89,2,4,5};
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