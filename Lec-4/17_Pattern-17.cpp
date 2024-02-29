//Pattern:17--->
//Example:
// A 
// B C
// C D E 
// D E F G
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row){
            char ch = 'A'+ row + col - 2;
            cout<< ch <<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}
