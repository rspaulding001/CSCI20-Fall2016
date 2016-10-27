/*Created By: Ryan Spaulding
Date Created: 10/26/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

int main () {
    
const int SIZE = 20;  // capped the array size at 20 because that is a lot of food for a tiny bistro
int i =0;               //initializing the variables
int varX =0;

 string Menu[SIZE];     //array
 
    cout << "Enter one item from the menu" << endl;
    cout << "When you're done enter 'Finished'." << endl;
    
    i = 1;
    
    while (i < SIZE && Menu[i - 1] != "Finished") {                         //keeps printing and asking for a menu choice until the user inputs 'Finished'
        cout <<"~~~~~~~~~~~~~~~~~THE MENU~~~~~~~~~~~~~~~~" << endl;
        cout << "   Apple, Banana, Fish, Beef, Pork," << endl;
        cout << "Sandwich, Water, Soda, BEER, Happiness" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Please pick one item from the menu at a time: " << endl;
        cout << "       Enter 'Finished' when done." << endl << endl;
        cin  >> Menu[i];
        i++;
        varX++;
        
    }

cout << endl << endl;                   //creates white space for output to look nice
    for (i = 1; i < varX - 1; i++)
    {
        cout << "Your number " << i << " choice was " << Menu[i] << "." << endl;    //prints the number of choices and the matching menu item chosen for that number
    }



return 0;
}