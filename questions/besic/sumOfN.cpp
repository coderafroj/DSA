#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to sum natural number:-";
    int sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;

    }
    cout<<"sum is "<<sum<<endl;
}