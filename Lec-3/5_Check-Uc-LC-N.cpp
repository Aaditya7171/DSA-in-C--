//Program to find where the char lies--->
#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter a char value: ";
    cin>>a;
    
    //'A' in ASCII is 65
    //'a' in ASCII is 97
    //'0' in ASCII is 48
    if(a >= 'A' && a<='Z') {
        cout<<"Entered charecter "<< a <<" is UPPERCASE.";
    }
    else if( a >= 'a' && a <= 'z'){
        cout<<"Entered charecter "<< a <<"  is lowecase.";
    }
     else if( a >= '0' && a <= '9'){
        cout<<"Entered charecter "<< a <<"  is numeric.";
    }
}
