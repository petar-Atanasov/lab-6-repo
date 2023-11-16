#include <iostream>
#include <array>

using namespace std;
// create a function for array with two arguments
void print_Array(int arr[], int size );

int main() { 
    
    int numbers[] = {1, 2, 3};
    // call the function in the main method
    print_Array(numbers, 3);
    return 0;
}
// definiton of the funciton
void print_Array(int arr[], int size){
    cout << " [ ";

for ( int i = 0; i < size; i++){
    cout << arr[i];

    if ( i < size - 1){
        cout << ", ";
    }
}
    cout << " ]";
}
