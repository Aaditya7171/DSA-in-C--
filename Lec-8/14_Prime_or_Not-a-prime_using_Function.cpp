//Program to check given number is prime or not using function
#include<iostream>
using namespace std;

//Creating a booolean function that will return:
// 1 --> prime number
// 0 --> not a prime number
bool isPrime(int n) {

    for(int i = 2; i < n; i++){
        if(n % i == 0){ //divided-not a prime number
            return 0;
        }
    }
    return 1;//not divided-is a prime number
}

int main() {
    int n;
    cout << "Enter a number to check is it prime number or not: ";
    cin >> n;

    if (isPrime(n)){//calling "isPrime" with "n" parameter
        cout << "Given number is a prime number.";//if "isPrime" returns 1 then "if" block will be executed
    }
    else{
    cout << "Given number is not a prime number";//"isPrime" return 0
    } 
    return 0;
}