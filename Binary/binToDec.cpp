#include <iostream>
using namespace std;
int main(){
    cout<<"\t\t-------bin to dec------\t\t\n";
    int bin,ans=0,pow=1,rem;
    cout<<"Enter binary number:- ";
    cin>>bin;
    while ((bin!=0))
    {   
        rem=bin%10;//last digit 
        ans+=rem*pow;
        bin/=10;
        pow*=2;
    }
    cout<<bin<<" To dec is "<<ans;
    
}