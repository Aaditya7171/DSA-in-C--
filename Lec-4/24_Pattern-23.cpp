//Pattern:23--->
//       1
//     2 2
//   3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        int space = 1;
        int col = 1;
        while(space <= n-row){
            cout<<" ";
            space++;
        }
        while(col <= row) {
            cout<< row ;
            col++;
        }
        row++;
        cout<<endl;
       
    }
}
