// Data types and their size--->
#include<iostream>
using namespace std;

int main() {

    int a = 5;
    cout<< a << endl;

    char ch ='A';
    cout<< ch << endl;

    float f=1.234567;
    cout<< f << endl;

    double d = 1.234567;
    cout<< d << endl;

    bool bl = true;
    cout<< bl << endl;

    int SizeOfInt = sizeof(a);
    cout<<"size of integer data type is " << SizeOfInt <<" bytes"<<endl;

    int SizeOfChar = sizeof(ch);
    cout<<"size of charecter data type is " << SizeOfChar <<" bytes"<<endl;

    int SizeOfFloat = sizeof(f);
    cout<<"size of float data type is " << SizeOfFloat <<" bytes"<<endl;

    int SizeOfDouble = sizeof(d);
    cout<<"size of double data type is " << SizeOfDouble <<" bytes"<<endl;

    int SizeOfBool = sizeof(bl);
    cout<<"size of boolean data type is " << SizeOfBool <<" bytes"<<endl;

}