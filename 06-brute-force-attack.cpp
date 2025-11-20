#include <iostream>
using namespace std;

int main() {
    const int PASSWORD_CORRECT = 12345; // The correct password
    int userPassword; // variable for user input
    int attemps = 0; // Number of attempts counter
    const int MAXIMUM_ATTEMPS = 5; // Maximum number of password attempts.

    // Ask user for the first password attempt
    cout << "Ener your password: ";
    cin >> userPassword;
    attemps++; // First attempt

    // for the while loop. If password is incorrect and less than maximum attempts
    while (userPassword != PASSWORD_CORRECT 
&& attemps < MAXIMUM_ATTEMPS) {
        cout << "Incorrect password. You have " 
        << (MAXIMUM_ATTEMPS - attemps)
        << " attempts(s) remaining." << endl; // Output statement verifying how many attempts you have left

        cout << "Enter the password again:";
        cin >> userPassword;
        attemps++;
        }     

        // Check to see if you entered the correct password, and if you ran out of agttempts
        if (userPassword == PASSWORD_CORRECT) { 
           cout << "Access granted! Welcome!" << endl;
        } else {
            cout << "Too many failed attempts! The authorities have been alerted." << endl;       
        }   

    return 0;

}