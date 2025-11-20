#include <iostream>
using namespace std;

int main(){
    int counter1 = 0;// variable to store values

    while (counter1 <= 50){//check if counter is less than or equal to 50 counting up from 0
        cout << counter1 << endl;
        counter1++; // counting up in incriments of 1
        
    }
    cout << endl;

    int counter2 = 50; // check if counter is more than or equal to
    while (counter2 >= 0) {//Counting from 50 down to 0 
        cout << counter2 <<  endl;
        counter2--; // counting down in decrements of 1
        
    }
    cout << endl;
    
    // 3. Counts up from 30 to 50
    int counter3 = 30; // variable to store values
    while (counter3 <= 50) {
        cout << counter3 << endl;
        counter3++; // counting up in increments of 1
        
    }
    cout << endl;
    
    // 4. Counts down from 50 to 0 in decrements of 2
    int counter4 = 50; // 
    while (counter4 >= 10) {
        cout << counter4 << endl;
        counter4 -= 2; // subtracts 2 
    }
        cout << endl;
    // 5. Counts up from 100 to 200 in increments of 5
    int counter5 = 100;
    while(counter5 <= 200){
        cout << counter5 << endl;
        counter5 += 5; // Adds 5 to each loop
    
    }
    
    return 0;
}