#include<iostream>
#include<cmath> 
#include <climits>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
     int ans = 1;
        for(int i = 0; i <= 30; i++){
                if (ans == n) {
                cout<<"TRUE";
                return 0;
            }
        if(ans < INT_MAX/2)
        ans = ans * 2;
        }
        cout<<"FAlSE";
        return 0;
}
