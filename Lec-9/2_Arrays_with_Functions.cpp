//Arrays using functions & different types of arrays(int, float, double etc.--->
#include<iostream>
using namespace std;

// Template function to print elements of any type of array
// Parameters:
//   - arr: The array to be printed.
//   - size: The size of the array.
// Template Parameter:
//   - T: Represents the data type of the elements in the array.
template <typename T>
void printArray(T arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main() {

//"int" type array:1-->

    // Declare and initialize an array with 15 elements
    int myArray[15] = {1,2,3,4,5,6,7};

     // Calculate the size of myArray
    int myArraySize = sizeof(myArray) / sizeof(int) ;
    // Here we have declared an array with 15 elements of type int,
    // so the size of the array is (15 * sizeof(int)) bytes.
   
    cout << "this is Array:1(int-type)" << endl;

    // Print the elements of myArray using the printArray function
    printArray(myArray, myArraySize);
    //By the way, declaring the size as a variable isn't a good practice; instead, declare the size of the array explicitly.    
    cout << endl; 


//"int" type array:2-->

    int array[10] = {9,8,7,6,5,4,3};

    int arraySize = sizeof(array) / sizeof(int);

    cout << "this is Array:2(int-type)" << endl;

    printArray(array, arraySize);

    cout << endl;


//"char" type array:-->

    char charArray[6] = {'S', 'e', 'l', 'i', 'n', 'a'};

    int charArraySize = sizeof(charArray) / sizeof(char) ;

    cout << "this is Array:3(char-type)" << endl;

    printArray(charArray, charArraySize);

    cout << endl;

    
//"bool" type array-->

    bool boolArray[3] = {0 , 1, 1};

    int boolArraySize = sizeof(boolArray) / sizeof(bool) ;

    cout << "this is Array:4(bool-type)" << endl;

    printArray(boolArray, boolArraySize);

    cout << endl;


//"double" type array-->
    
    double doubleArray[5] = {1.5, 2.55, 3.66, 6.777, 8.8888};

    int doubleArraySize = sizeof(doubleArray) / sizeof(double);

    cout << "This is Array:5(double-type)" << endl;

    printArray(doubleArray, doubleArraySize);

    cout << endl;


 //"float" type array-->
    
    float floatArray[5] = {1.5f, 2.5567f, 3.66254f, 4.777f, 8.888834f};

    int floatArraySize = sizeof(floatArray) / sizeof(float);

    cout << "This is Array:6(flaot-type)" << endl;

    printArray(floatArray, floatArraySize);

    cout << endl;


    return 0;

}
