#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={4,5,7,4,9};
    cout<<vec[1]<<endl;//access element by index

    vec.push_back(16);//add element at end

    vec.pop_back();//remove element at end
    cout<<"first number"<<vec.front()<<endl;//print first element
    cout<<"last number"<<vec.back()<<endl;//print last element
    //print all data in vector
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size - "<<vec.size()<<endl;
    cout<<vec[7];//no error 
    cout<<vec.at(7);

}