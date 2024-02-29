//Pattern:24--->
//Example:
// 1 2 3 4
//   2 3 4
//     3 4
//       4
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = 1;
        int col = row;

        while (space < row) {
            cout << "  ";
            space++;
        }

        while (col <= n) {
            cout << col;
            if (col < n) {
                cout << " ";
            }
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
