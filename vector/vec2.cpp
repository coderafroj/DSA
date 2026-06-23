#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string>courses={"ADCA","MDCA","DCST","DCA"};
    for(string course:courses){
        cout<<course<<" ";
    }
    cout<<endl;
    vector<string>name; 
    string temp;
    for(int i=0;i<5;i++){
        getline(cin,temp);
        name.push_back(temp);
    }
    for(string n:name){
        cout<<n<<" ";
    }
}