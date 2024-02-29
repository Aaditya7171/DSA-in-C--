#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n <= 0){
        cout<<"False";
        return 0;
    }
    int check = n & (n-1);
    if(check==0){
        cout<<"True";
        return 0;
    }
    else{
        cout<<"False";
        return 0;
    }
}