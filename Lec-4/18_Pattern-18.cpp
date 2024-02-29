//Pattern:18--->
//Example:
// D
// C D
// B C D
// A B C D
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    
    while (row <= n) {
        int col = 1;
        char ch = 'A'+ n - row ;
        while (col <= row){
            cout<< ch <<" ";
            col++; 
            ch++;
        }
        row++;
        cout<<endl;
    }
}
