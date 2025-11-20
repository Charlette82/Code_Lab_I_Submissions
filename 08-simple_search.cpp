#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialising the array of names.
    string names[] = {"Jack", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchName = "Sam";
    int size = sizeof(names) / sizeof(names[0]);
    bool found = false;
    
    // Ask the user to enter a name to search.
    cout << "Enter a name to search: ";
    cin >> searchName; // Reads the input from the user.
    
    // looping through the arrays to search for the Name.
    for(int i = 0; i < size; i++) {
        if(names[i] == searchName) {
            cout << searchName << " was found at index " << i << "!" << endl;
            found = true;
            break; // stop once name is found.
        }
    }
    
    // If name is not found.

    if(!found) {
        cout << searchName << " was not found on the list. " << endl;
    }
    
    return 0;
    }