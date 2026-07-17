#include <iostream>
using namespace std;

int large(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int small(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    const int n=5;
    int num[n]={4,7,3,8,9};
    cout<<"largest is: "<<large(num,n)<<endl;
    cout<<"smalest is: "<<small(num,n);
 
}