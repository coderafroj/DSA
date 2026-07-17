#include <iostream>
using namespace std;

int linearSearch(int arr[],int s,int target){
    for(int i=0;i<s;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;//not found

}
int main(){
    const int size=5;
    int target=9;
    int ar[size]={4,7,8,4,9};
    int sNum=linearSearch(ar,size,target);
    if(sNum==-1){
        cout<<"number "<<target<<" not found in array";
    }
    else{
        cout<<"Number "<<target<<" index is "<<sNum<<endl;
    }
  
}