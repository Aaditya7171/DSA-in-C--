//Homework:1 - Print the sum of all the elements of an array(take array in input from user)--->
#include<iostream>
using namespace std;

int sumOfElements(int myArray[], int size){
    int sum = 0;
    for(int i= 0; i < size; i++) {
        sum = sum + myArray[i];
    }
    return sum;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int myArray[100];

    for(int i = 0; i < size; i++) {
        cin >> myArray[i];
    }
    cout << "Sum of all the elements of given array is: " << sumOfElements(myArray, size);

}