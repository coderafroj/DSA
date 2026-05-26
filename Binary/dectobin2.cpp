#include <iostream>
using namespace std;
int main(){
    int bin[100];
    int n;
    cout<<"Enter number :-";
    cin>>n;
    int i=0;
    while(n!=0){
        bin[i]=n%2;
        n/=2;
        i++;

    }
    //print bin
    for(int j=i-1;j>=0;j--){
        cout<<bin[j]<<" ";
    }

}