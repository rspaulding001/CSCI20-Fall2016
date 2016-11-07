/*Created By: Ryan Spaulding
Date Created: 10/31/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

int main () {
    
const int SIZE = 10; // capped the array size at 10
int i =0;               //initializing the variables
float cost =0;
string userInput;

string Menu[SIZE];      //array for menu items
float Price[SIZE];      //array for price
int Inventory[SIZE];    //array for inventory
 
 
 
Menu[0] = "Apple";        Price[0] = 1.00;  i++;     Inventory[0] = 1;
Menu[1] = "Banana";       Price[1] = 2.75;  i++;     Inventory[1] = 2;
Menu[2] = "Fish";         Price[2] = 3.75;  i++;     Inventory[2] = 3;
Menu[3] = "Beef";         Price[3] = 4.00;  i++;     Inventory[3] = 4;
Menu[4] = "Pork";         Price[4] = 5.75;  i++;     Inventory[4] = 5;
Menu[5] = "Sandwich";     Price[5] = 6.50;  i++;     Inventory[5] = 6;
Menu[6] = "Water";        Price[6] = 7.00;  i++;     Inventory[6] = 7;
Menu[7] = "Soda";         Price[7] = 8.50;  i++;     Inventory[7] = 8;
Menu[8] = "BEER";         Price[8] = 9.00;  i++;     Inventory[8] = 9;
Menu[9] = "Happiness";    Price[9] = 10.05; i++;     Inventory[9] = 10;

i=0;
    while (i < SIZE && Menu[i] != "Finished") {                         //keeps printing and asking for a menu choice until the user inputs 'Finished'
        cout <<"~~~~~~~~~~~~~~~~~THE MENU~~~~~~~~~~~~~~~~" << endl;
        cout << "   Apple, Banana, Fish, Beef, Pork," << endl;
        cout << "Sandwich, Water, Soda, BEER, Happiness" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << "Please pick one item from the menu at a time: " << endl;
        cout << "       Enter 'Finished' when done." << endl << endl;
        getline(cin, userInput);
        
        while (userInput != Menu[i] && i < 10) {
            i++;
            
            if (userInput == Menu[i] && userInput != "Finished") {
                cout << Price[i] << " ";
                cout << Inventory[i] << endl;
                cost = cost + Price[i];
                Inventory[i] = Inventory[i] -1;
                i=0;
                
            }
            
            else if (userInput == "Finished") {
                cout << "$" << cost << " Is your total." << endl;
            }
        }
            
    }


return 0;
}