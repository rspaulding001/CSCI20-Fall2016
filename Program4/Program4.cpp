/*Created By: Ryan Spaulding
Date Created: 11/11/16
CSI20
Browne */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>

using namespace std;

int main() {
    const int SIZE = 50;    //initializing variables
    ifstream inFS;      
    string filename = " ";
    char colon = ':';
    int transactions =0;
    string payee = " ";
    float amount =0;
    int i = 0;
    
    int ArrarChx[SIZE];     //initializing arrays
    int ArrayDate[SIZE];
    string ArrayPayee[SIZE];
    float ArrayAmount[SIZE];
    
    
    cout << "Enter a filename:" << endl;        //to get a file to open
    cin  >> filename;
    
    
    inFS.open(filename);                        // opens file
        if (!inFS.is_open()) {
            cout << endl << "~~~~~~~ERROR~~~~~~~" << endl;      //error message for failure to open
            cout << "File did not open!" << endl;
        return 1;
        }
    while (!inFS.eof()) {                                           //takes file info as input until end of file
            inFS >> ArrarChx[i] >> colon >> ArrayDate[i] >> colon;
            inFS >> payee >> colon >> amount >> colon;
            
            i =0;
    while (payee != ArrayPayee[i] && i < 100) {                 //checks for new or old payee
        i++;
    }
        if (payee == ArrayPayee[i]) {                               // increases the ammount each payee has paid
            ArrayAmount[i] = ArrayAmount[i] + amount;
            transactions++;
        }    
    }
    
    i=0;
    
    for (i=0; i<50; i++) {
        cout << ArrayPayee[i] << " " << ArrayAmount[i] <<endl;
        cout << "The total transactions is: " << transactions;
    }
    
    inFS.close(); // closing file
    return 0;
}