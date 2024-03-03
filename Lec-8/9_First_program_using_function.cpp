#include<iostream>
using namespace std;

//creating function
int power(int a, int b) //this fucntion can be used anywhere in the program even many times
{

    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "Enter a & b: ";
    cin>> a >> b;

    int answer = power(a,b) ; //storing the return of fucntion in "answer"
    cout << "pow(a,b) is: " << answer;
}
