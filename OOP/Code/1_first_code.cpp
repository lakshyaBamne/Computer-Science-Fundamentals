/*
    Steps to create and run a C++ program using g++ compiler

    -> g++ -c mycode.cpp // compilation creates an object file
    -> g++ mycode.o -o program // linking creates the machine executable
    -> ./program.exe // run the executable using the command used in linux/mac/windows
*/

#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
    int x, y;
    cout << "Please enter two integers (separated by a space) : ";
    cin >> x >> y;

    int num_sum = x + y;
    cout << "Sum of the two integers is = " << num_sum << endl;

    return EXIT_SUCCESS;
}


