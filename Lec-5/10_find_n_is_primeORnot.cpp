//Prime number using "for loop" & "break" keyword--->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number to check, is it prime or not: ";
    cin>>n;

    bool check = 1;
    for (int i=2; i<= n; i++){
        if ((n % i) == 0){
            check = 0;
            break;//Jumps from the loop(exits from the loop)
        }
    }
    if(check == 0){
        cout<<"Given number is not a prime number.";
    } 
    else{
        cout<<"Given number is a prime number.";
    }
}
