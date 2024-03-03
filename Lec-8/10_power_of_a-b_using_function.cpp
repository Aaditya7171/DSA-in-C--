#include<iostream>
using namespace std;

//creating function
int power() {
    int a, b;
    cout << "Enter a & b: ";
    cin>> a >> b;

    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}

int main() {

    int answer = power() ; //storing the return of fucntion in "answer"
    cout << "pow(a,b) is: " << answer << endl;

    int answer_2 = power() ; 
    cout << "pow(a,b) is: " << answer_2 << endl;

    int answer_3 = power() ; 
    cout << "pow(a,b) is: " << answer_3 << endl;
    
    int answer_4 = power() ; 
    cout << "pow(a,b) is: " << answer_4 << endl;

    // In this way we can use that the fuction power as many times as we want
    // Remember that the variable to which you are initailizing the return of fuction should be different in every use of function(e.g., answer, answer_2, answer_3....)
    // And how concised and readable the code is, unlike (8_Power_of_a-b)
}

