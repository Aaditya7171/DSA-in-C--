//We can solve that question using if-else statements too
#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input from the user
    cout << "Enter the amount (n): ";
    cin >> n;

    // Variables to store the count of each type of currency note
    int note_100 = 0, note_50 = 0, note_20 = 0, note_1 = 0;

    // Calculate the number of Rs 100 notes
    if (n >= 100) {
        note_100 = n / 100;
        n = n % 100;
    }

    // Calculate the number of Rs 50 notes
    if (n >= 50) {
        note_50 = n / 50;
        n = n % 50;
    }

    // Calculate the number of Rs 20 notes
    if (n >= 20) {
        note_20 = n / 20;
        n = n % 20;
    }

    // Calculate the number of Rs 1 notes
    if (n > 0) {
        note_1 = n;
    }

    // Displaying the result
    cout << "The least number of notes:"<< endl;
    cout << "Rs 100 notes: " << note_100 << endl;
    cout << "Rs 50 notes: " << note_50 << endl;
    cout << "Rs 20 notes: " << note_20 << endl;
    cout << "Rs 1 notes: " << note_1 << endl;

}
