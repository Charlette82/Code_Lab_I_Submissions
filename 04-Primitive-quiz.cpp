#include <iostream>
using namespace std;

int main() {
    // Declaring variables for name, hometown, and age
    string France_capital = "Paris"; // Add capital to variable
    string Not_P = "please try again";
    if (France_capital == "Paris") {// Check to see if statement is true.
       cout << "you are correct: " <<endl; // output if statement is true.
    }else {
        cout << "Please try again" <<endl; //output statement if incorrect
    }
     // This allows user to input information
    cout << "What is the capital of france: ";
    getline(cin, France_capital); //Getline allows spaces between the names
    cout << "Please try again: "; // Output message if statement incorrect
    getline(cin, Not_P);

    return 0;
}