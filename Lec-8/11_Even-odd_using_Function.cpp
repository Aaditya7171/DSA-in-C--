//Program to check that given number is even or odd--->
#include<iostream>
using namespace std;

//Creating boolean function named isEven() that will return either 0  or 1
//1 --> Even
//0 --> odd
bool isEven(int a){
    if(a & 1) {   // if (a & 1) is 1 then then block will be executed
        return 0;//return 0 if (a & 1 == 1) Odd
    }
    return 1; //else {a & 1 == 0} return 1 Even
}

int main() {
    //Input from user
    int num;
    cout << "Enter a number to check is it even or odd: ";
    cin >> num;

    if(isEven(num)){ //If "isEven" returns 1, then "if" block will be executed
        cout << "Given number is Even.";
    }
    else {//If "isEven returns 0, then "else" block will be executed
        cout << "Given number is odd.";
    }
}