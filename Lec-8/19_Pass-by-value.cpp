#include<iostream>
using namespace std;

void dummy(int n) {

    n++;//incremented n by 1(n=16)

    cout << "n inside dummy is: " << n << endl;

}

int main() {

    int n = 15;

    dummy(n);//n is incremented by 1 in this function(n=16)

    cout << "n inside main is: " << n << endl; 
    //Here n still remains same(n=15) this is called "pass by value"
    //when we called dummy() inside main() a copy of n is created in dummy() so that the value of n inside main() remains the same
    //if we get the value of n in main() after incremeting the value in dummy() i.e., n = 16 in main() too, then it is called "pass by reference", which we'll learn later on
    return 0; 
}