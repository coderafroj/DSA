#include <iostream>
using namespace std;
int main(){
    int arr[5]={4,5,7,3,8};
    int maxIndex=0,minIndex=0;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    cout<<"before swapping\n";
    cout<<"max value index is "<<maxIndex<<" Min value index is "<<minIndex;
    //swap
    int temp;
    temp=maxIndex;
    maxIndex=minIndex;
    minIndex=temp;
    cout<<"\nafter swapping\n";
        cout<<"max value index is "<<maxIndex<<" Min value index is "<<minIndex;
}