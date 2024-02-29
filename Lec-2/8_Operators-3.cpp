//Logical operators in c++--->
#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 3; 
    //Logical And (&&)
    cout<<(a > c && c < b)<<endl;//Returns 1 because a>c and c<b(both conditons are true)
    // Logical or (||)
    cout<<(a > c || c > b)<<endl;//Returns 1 because a>c while c!>b(any one conditon true)
    // logical not (!)
    cout<<!(a > c && c < b);//Returns 0 (reversed the result)
}
