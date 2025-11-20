#include <iostream>
using namespace std;

// this function checks to see if the number is even then oupts a message
bool isEven(int num) {
    return num % 2 == 0;
    
}

int main() {
    int number;

    // Ask user to enter number
    cout << " Enter a number: ";
    cin >> number;

    // call the function and output results

    
    cout << "is the number is even? " << (isEven(number) ? "Yes" : "No") << endl;

    

    return 0;
}