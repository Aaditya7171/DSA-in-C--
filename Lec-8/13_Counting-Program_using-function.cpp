#include<iostream>
using namespace std;

//Function Signature
void printCounting(int n) {//void function will not return any value, in this case it is printing values
//Function body
    for(int i = 1; i <= n; i++) {
        cout << i << "  ";//instead of returning values like "int" or "bool" function, void function will print the values(i)
    }
}

int main () {
    int n;
    cout << "Enter the last number till you want to count: ";
    cin >> n;

    printCounting(n);//calling fucntion "printCounting()"
}