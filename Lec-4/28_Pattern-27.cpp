//Pattern:27--->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row=1;
    while(row <= n){
        //printing 1st trianle
        int col = 1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }
        //printing 2nd trianle
        int star = 1;
        while(star<=(row-1)*2){
            cout<<"*";
            star++;
        }
        //printing 3rd trianle
        int count=n-row+1;
        while(count>=1){
            cout<<count;
            count--;
        }
        row++;
        cout<<endl;
    }
}
