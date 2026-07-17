#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,3,-2,6,8};
    int size=7;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    // mathod 1
    // for(int i=0;i<size;i++){
    //     if(arr[i]<smallest){
    //         smallest=arr[i];
    //     }
    // }
    // cout<<"smallest is: "<<smallest;


    // mathod 2
    for(int i=0;i<size;i++){
           smallest=min(arr[i],smallest);
           largest=max(arr[i],largest);
    }
 
    cout<<"smallest is "<<smallest<<endl;
    cout<<"largest is "<<largest;
}