#include <iostream>
using namespace std;
int main(){
    int sumOddNumber=0;
    int n;
    cout<<"Enter number:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        sumOddNumber+=i;
    }
    cout<<"sum is:-"<<sumOddNumber<<endl;
}