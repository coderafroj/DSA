#include <iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size];
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
}