#include <iostream>
#include <stdio.h>

using namespace std;
// argc (ARGument Count) is an integer variable
// that stores the number of command-line arguments 
//passed by the user including the name of the program. 


//argv (ARGument Vector) is an array 
//of character pointers listing all the arguments.
int main( int argc, char* argv[]){
    
    cout << " The program name: "<< argv [0]
    << endl;

    cout << " called with " << argc -1 
    << " arguments: "<< endl;
   
    for(int i = 1; i < argc; i++){
        cout << '\'' << argv [i]<<'\'' << '\n';

        if (i < argc - 1){
        cout << " ";
        }

    }
    cout << endl;
    return 0;
}