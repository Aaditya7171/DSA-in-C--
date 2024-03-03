#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << endl <<"Enter 2nd number: ";
    cin >> b;

    char operation;
    cout << endl << "Enter operation to perform(e.g., +,-,*,/,%): ";
    cin >> operation ; 
    cout << endl;
    
    switch(operation) {

        case '+' : cout << "Additon of " << a << " and " << b << " is : " << (a+b) << endl;
            break;
 
        case '-' : cout << "Subtraction of " << a << " and " << b << " is : " << (a-b) << endl;
            break;

        case '*' : cout << "Multiplication of " << a << " and " << b << " is : " << (a*b) << endl;
            break;

        case '/' : cout << "Division of " << a << " and " << b << " is : " << (a/b) << endl;
            break;

        case '%' : cout << "Modulus of " << a << " and " << b << " is : " << (a%b) << endl;
            break;

        default : cout << "Please enter a valid operation.";

    }
}