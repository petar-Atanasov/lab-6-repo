#include <iostream>
#include <array> 

using namespace std; 
//declare the function array with 3 arguments 
void swap_array(int arr[], int x, int y);

int main () {

// create an array in the main method 
int numbers[] = {1, 2, 3};
cout << "Now will be swapped the numbers inside the array. ";
//print the first square brackets  
cout << " [ ";
// call the function and assign variables to it 
swap_array(numbers, 0, 1);
// go through the for loop to swap the numbers
for ( int i = 0; i < 3; i++){
    cout << numbers[i];
    // assign a comma after the number 
    if ( i < 2){
        cout<<", ";
    }
}
// print the closing square bracket
cout << " ]";
return 0;
}
// definiton for the swap function
// assign a temporary variable and attached the arguments to it 
void swap_array(int arr[], int x, int y){
int temp = arr[x];
arr[x] = arr[y];
arr[y] = temp;
}