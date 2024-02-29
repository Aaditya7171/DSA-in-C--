#include<iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = '2';
    char dh = '3';
    char eh = '4';
    

    switch(ch){

        case 1 : cout << "This is case one" << endl;
            break;

        case '2' : cout << "this case does'nt have break keyword" << endl;

        case '3': cout << "This is case two" << endl;
            break;//if we'll not add "break" here, it will also execute the case next to it
      
        case '4' : cout << "This is case 4" << endl;

        default: cout << "this is default case" << endl;//if you came through default case then it'll be executed (if everhow you get to that "default" block)

    }
}