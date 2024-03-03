#include <iostream>
using namespace std;

int main() {
    //for first pow(a,b)
    int a, b;
    cout << "Enter a & b: ";
    cin>> a >> b;
    
    int ans = 1;
    for(int i = 0; i < b; i++){
            ans = ans * a;
    }

    cout << "pow(a,b) is: " << ans << endl;

    //for second pow(a,b)
    int c, d;
    cout << "Enter c & d: ";
    cin>> c >> d;
    
    ans = 1;
    for(int i = 0; i < d; i++){
            ans = ans * c;
    }

    cout << "pow(c,d) is: " << ans << endl;

    //now if want to add more pow(a,b) in the same program, we'll havre to write number of lines of code(our code gets bulky, buggy and less readable) {e.g., for second pow(a,b)}
    //to get rid of this we can use "fucntions", we'll see that how this same thing can be implemented in less number of lines of code in the next program(10_power_of_a-b_using_function).

}