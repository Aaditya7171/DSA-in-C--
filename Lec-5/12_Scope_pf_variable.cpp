//Scope of variable--->
#include<iostream>
using namespace std;

int main() {
    int a = 5; 
    cout <<a<<endl;

    if(true) {
        int b=2;
        cout<<b<<endl;
    }
    // cout<<b<<endl;//"b" can't be used outside of it's scope
    int i=5;
    for(int i=0; i<=10; i++){
        cout<<"Hello!"<<endl;//initially i=0 in this scope
    }
    cout<<endl;
    for(; i<=10; i++){
        cout<<"Hello!"<<endl;//i is not defined seperately in this scope so "i" will be "5" as it is defined above
    }
    //we can't define same name variable in the same block
    //variable defined in main block can be used in any block of thr program
}
