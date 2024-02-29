//find sum from 1 to n(input) using for loop--->
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Printing sum from 1 to "<< n <<"-->"<<endl;

    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout<<sum;
}
