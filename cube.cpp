#include <iostream>

using namespace std;

double cube(double side);

int main (){
    double x;
    cout << "Enter a number: ";
    cin >> x; 
    cout << "The cube of " << x <<
    " is " << cube(x) << '\n';
    return 0;
    }

    double cube(double side){
        return side * side * side; 
    }