//Pattern:14(Method:2)--->
//Example:
// A B C
// B C D
// C D E
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    
    while (row <= n) {
        int col = 1;
        char ch = 'A'+ row - 1 ;
        while (col <= n){
            cout<< ch <<" ";
            col++; 
            ch++;
        }
        row++;
        cout<<endl;
    }
}
