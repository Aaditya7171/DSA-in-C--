#include<iostream>
using namespace std;

int main() {
    char ch = '1';



//The continue statement is meant to be used within loops (for, while, or do-while), and it cannot be used directly within a switch statement
    // Example loop
    for (int i = 0; i < 3; ++i) {
        switch(ch) {
            case '1':
                cout << "1st case" << endl;
                // No need for continue here, as it's the last statement in the case
                break;

            case '2':
                cout << "2nd case with different value" << endl;
                continue; // This will move to the next iteration of the loop

            case '3':
                cout << "3rd case" << endl;
                break;

            case '4':
                cout << "4th case" << endl;
                break;
        }
    }
//Using continue within a switch is inappropriate because the switch lacks the iterative nature of a loop, and there is no concept of continuing to the next iteration.
    return 0;
//    for (int i = 0; i <= 10; i++){
//     if(i == 3 || i == 9){
//     continue;}
//        cout<< i << endl;
//    }
} 