//Homework-1: you have to make a program that takes the value of n from the user and calculates the least number of notes needed to make that amount using currency notes of 100, 50, 20, and 1. 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the total ammount ";
    cin >> n;
 
    int note_100 = 0, note_50 = 0, note_20 = 0, note_1 = 0;
     
    while (n > 0) {
        switch (n / 100){
            case 0 : switch(n / 50) {
                case 0 : switch (n / 20) {
                    case 0 : note_1 = note_1 + n;
                             n = 0;
                             break;
        
                    default : note_20 = note_20 + n / 20;
                    n = n % 20;
                    break;
                }
                break;
                default : note_50 = note_50 + n / 50;
                n = n % 50;
                break;
            }
            break;
            default : note_100 = note_100 + n / 100;
                      n = n % 100;
                      break;        
        }
    }
    cout << "The least number of notes: " << endl;
    cout << "Rs 100 notes: "<< note_100 << endl;
    cout << "Rs 50 notes: "<< note_50 << endl;
    cout << "Rs 20 notes: "<< note_20 << endl;
    cout << "Rs 1 notes: "<< note_1 << endl;
   
}