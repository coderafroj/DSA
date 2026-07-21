    #include <iostream>
    using namespace std;

    void printForward(int n){
        if(n>10) return;
        cout<<n<<endl;
        printForward(n+1);
    }
    int main(){
        printForward(1);

    }