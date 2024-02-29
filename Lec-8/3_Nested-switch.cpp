#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int ch = '2';

    switch(ch){
        
        case 1 : cout << "this is outer switch" << endl;
            break;
        
        case '2' : switch(num) {
            case 1 : cout << "this is Inner Switch" << endl;
                break;
        }
    }
}