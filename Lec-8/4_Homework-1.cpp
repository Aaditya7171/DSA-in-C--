//how can you exit from a loop using exit() functon
#include<iostream>
using namespace std;

int main(){
    int n = 1;

    while(1){
        switch(n){
        case 1: cout << "True";
            break;
    }
    exit(0);//call exit(0) to terminate the program
    } 
}
