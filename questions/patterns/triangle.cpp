// #include <iostream>
// using namespace std;
// // x
// // x x
// // x x x
// // x x x x
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"X"<<" ";
//         }
//         cout<<endl;
//     }

// }
#include <iostream>
using namespace std;
// X X X X X 
// X X X X 
// X X X 
// X X 
// X 
int main(){
    int n=4;
    for(int i=n;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"X"<<" ";
        }
        cout<<endl;
    }

}