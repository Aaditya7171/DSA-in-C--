//Pattern:14--->
//Example:
// A B C
// B C D
// C D E
#include <iostream>
using namespace std;
 int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        int col = 1;;
        while (col <= n) {
            char ch = 'A' + row + col - 2 ;
            cout<< ch <<" ";
            col++;
        }
    cout<<endl;
    row++;
    }
 }
