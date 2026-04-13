#include <iostream>
using namespace std;
int main(){
    bool isPrime=true;
    int n;
    cout<<"Enter number:-";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"prime number";
    }
    else{
        cout<<"not prime ";
    }

}
