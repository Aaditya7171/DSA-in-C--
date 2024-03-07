//Scope in array
#include<iostream>
using namespace std;

// Function to update the array elements
void update(int array[], int n){
    cout << endl << "Inside the 'update' function" << endl;

    // Update the first element of the array to 120
    array[0] = 120;

     // Print the updated array elements
    for(int i = 0; i < n; i++){
        cout << array[i]<< " " ;//output: 120 2 3
    }
    cout << endl << "Returning to the 'main' function" << endl;
}

int main() {
    // Declare and initialize an array
    int array[3] = {1,2,3};

    // Call the 'update' function
    update(array, 3);

    cout << endl << "Printing inside the 'main' function " << endl;

    // Print the array elements in the 'main' function
    for(int i = 0; i < 3; i++){
        cout << array[i] << " ";//output: 120 2 3
    }

    // The output of the 'main' function is also the same as the 'update' function
    // because the 'array' stores the base address of the array, and that address is
    // given to the 'update' function, hence a copy of the array isn't made here (unlike functions with int).
    return 0;
}
