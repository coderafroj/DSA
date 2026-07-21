#include <iostream>
using namespace std;
int main(){
    double base;
    int power;
    float ans=1;
    cout<<"Enter base:-";
    cin>>base;
    cout<<"Enter power:-";
    cin>>power;
    if(power==0) ans=1;
    if(base==0) ans=0;
    if(base==1) ans=1;
    if(base==-1 && power%2==0) ans=1;
    if(base==-1 && power%2!=0) ans=-1;
    if(power<0){
        base=1/base;
        power=-power;
    }
    while(power>0){
        if(power%2==1){
            ans*=base;

        }
        base*=base;
        power/=2;

    }
    cout<<base<<" raised to the power "<<power<<" is "<<ans;
}