//find Fibonacci series from 0 to n(input)--->
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Printing Fibonacci series from 0 to next "<< n <<" numbers-->"<<endl;
    
    int a = 0;
    int b = 1;
    cout<< a << " " << b <<" ";
    for (int i = 1; i <= n; i++){
        int nextnum = a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
}
