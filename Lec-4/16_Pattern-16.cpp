//Pattern:16--->
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
    char ch = 'A';
    while (row <= n) {
        int col = 1;
        while (col <= row){
            cout<< ch <<" ";
            col++;
            ch++;
        }
        row++;
        cout<<endl;
    }
}
