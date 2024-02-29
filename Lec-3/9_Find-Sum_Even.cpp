//Program to find sum of all even number between 1 to n(input)--->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    int sum=0;
    
    while(i<=n){
        if(i % 2 == 0)
        sum=sum+i;
        i=i+1;
    }
    cout<<"Summation is: "<<sum;
}
