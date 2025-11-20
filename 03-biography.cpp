#include <iostream>
using namespace std;

int main() {
    // Declaring variables for name, hometown, and age
    string name = "Charlette"; // Add your name to variable
    string hometown = "London"; // Add your hometown to variable
    int age = 43; // Add age to variable

     // Asking the user to input their details
    cout << "Enter your name: ";
    getline(cin, name); //Getline allows spaces between the names

    cout << "Enter your hometown: ";
    getline(cin, hometown); //Geline allows space between hometown

    cout << "Enter your age: ";
    cin >> age; // This allows numeric input.

    // This outputs information using only one cout statement.
    cout << "Charlette: " << name << "\n" << "London: " << hometown << "\n"<< "43: " << age << endl;

         return 0;
}