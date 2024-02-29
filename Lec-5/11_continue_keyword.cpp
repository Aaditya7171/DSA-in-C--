//continue keyword
#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 5; i++) {
        cout<<"Hello!"<<endl;
        cout<<" Morning."<<endl;
        continue;//it makes the next portion of the loop unaccesible
        cout<<"How are you doing?";
    }
}
