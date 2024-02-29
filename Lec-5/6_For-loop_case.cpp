//For loop (;;)
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"printing numbers from 1 to "<< n <<endl;
    
    int i=1;
    for(; ; ){
        if(i<=n){
        cout<< i <<endl;
        }
        else{
            break;//exits from loop when condition is false
        }
        i++;
    } 
}
