#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string>chai;
    chai.push_back("masala chai");
    chai.push_back("green tea");
    chai.push_back("lemon tea");
    chai.push_back("orange tea");
    chai.push_back("chocklate tea");
    cout<<"size- "<<chai.size()<<endl;
    cout<<"capacity- "<<chai.capacity()<<endl;
}