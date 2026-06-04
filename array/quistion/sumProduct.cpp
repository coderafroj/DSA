#include <iostream>

int sum(int arr[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=arr[i];
        

    }
    return sum;
}

int product(int arr[],int s){
    
    int product=1;
    for(int i=0;i<s;i++){
        product*=arr[i];
        

    }
    return product;
}
int main(){
    const int size=5;
    int arr[size]={4,5,3,2,5};
    std::cout<<"sum is "<<sum(arr,size)<<std::endl;
    std::cout<<"product is "<<product(arr,size);


}