#include <iostream>
#include <array>

using namespace std;

void print_Array(int arr[], int size );

int main() { 

    int numbers[] = {1, 2, 3};
    print_Array(numbers, 3);
    return 0;
}

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
