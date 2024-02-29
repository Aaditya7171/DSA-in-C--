//Pattern:9(without using extra variable)--->
//Example:
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    
    int row=1;
    while(row<=n){
        int col=row;
        while(col<row*2){
            cout<<col<<" ";
            col++;
        }
    cout<<endl;
    row++;
    }
}
