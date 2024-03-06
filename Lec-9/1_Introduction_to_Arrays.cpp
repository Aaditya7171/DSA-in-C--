//Introduction to Arrays: declaration, initialization, accesing and some hit&tries in Arrays
#include<iostream>
using namespace std;

int main() {
//Declaration and initialization of Array
    //syntax : dataTypeOfArray arrayName[size] ={values};
    int myArray[10]={0};

//Accessing and printing the 9th element of array

    cout << "value at loc: 9 -->"<< myArray[9] << endl;//output: 0

// Output is gonna be 0 in this case beacuse in C++ array start from 0. So, if you have an array int myArray[10] = {0};, it initializes all elements to "0" by default



// Initializing an array with the first element set to 1 and the rest to 0 -->
    int tryArray[5] = {1};
    cout << "value at loc: 0 -->" << tryArray[0] << endl;//1
    cout << "value at loc: 1 -->" << tryArray[1] << endl;//0
    cout << "value at loc: 2 -->" << tryArray[2] << endl;//0
    cout << "value at loc: 3 -->" << tryArray[3] << endl;//0
//here only the first value of array is initialized with 1(location-0) and rest are 1(by default)

// Homework-1: Write a C++ program to initialize an entire array of size 20 with the value 1 -->
//declaration of Array of size 20

    int array[20];
        // Loop to access and print all 20 values of the array -->
    for(int i = 0; i < 20; i++) {
        array[i] = {1};
        cout <<"value at i=" << i <<": "<< array[i] << endl;
    }

//what if we create an Array of size 10 and only declare the 3 values of it--->
    int iDontKnow[10] = {1,2,3};

    //loop to accesing and printing all 20 values of the array-->
    for(int i = 0; i < 10; i++) {
        cout <<"value at i=" << i <<": "<< iDontKnow[i] << endl;
    }
    // All values, except the explicitly declared ones, are set to "0" by default
}
