//Program to find that given number is prime or not--->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=2;
    
    while(i<n){
        if(n % i == 0){
       cout<<"not prime";
       return 0;
        }
        i=i+1;
    }
    cout<<"Prime"<<endl;
    return 0;
}
