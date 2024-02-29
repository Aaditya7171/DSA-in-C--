#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int i = 0;
    int ans=0;

    while(n != 0){
        int digit= n % 2;
        n = n / 2;
        ans = (digit * pow(10, i) + ans);//Header file <math.h> is used to avail fucntion{pow(10, i)}
        i++;
    }
    cout<<"Conversion of given number in binary is: "<<ans;
}