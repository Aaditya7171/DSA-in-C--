// Comparision/Relational operators in c++--->
#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 5;
    int c = 6;
    //equal to(==)
    cout<< (a == b)<<endl;// returns 1 (false) because a is equal to b
    //Not equal to(!=)
    cout<< (a != b)<<endl;//returns 0 because a is equal to b
    //Greater then(>)
    cout<< (c > a)<<endl;//returns 1 because c is greater then a
    //Less then(<)
    cout<< (b < c)<<endl;//returns 1 because b is lesser then c
    //Greater then or equal to
    cout<< (a >= b)<<endl;//returns 1 because a is equal b
    //Less then or equal to
    cout<< (a <= b)<<endl;//returns 1 because a is equal to b 
}