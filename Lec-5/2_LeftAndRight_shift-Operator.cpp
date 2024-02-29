//Program for left shift(<<) & right shift(>>)--->
#include <iostream>
using namespace std;

int main(){
    int a,n;
    cout<<"Enter a number to calculate Left shift & right shift: ";
    cin>>a;
    cout<<"How many times you want left & right shift(e.g:1/2): ";
    cin>>n;

    cout<<"Left shift of given number is : "<<(a<<n)<<endl;
    cout<<"Right shift of given number is :"<<(a>>n);
}
