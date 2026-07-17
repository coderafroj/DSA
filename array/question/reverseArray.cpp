#include <iostream>

int reversArray(int arr[],int s){
    int start=0,end=s-1;
    for(int i=0;i<s/2;i++){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
    return 0;
}

void printArr(int arr[],int s){
    for(int i=0;i<s;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}
int main(){
    int arr[5]={5,4,3,6,7};
    printArr(arr,5);
    reversArray(arr,5);
    printArr(arr,5);


}