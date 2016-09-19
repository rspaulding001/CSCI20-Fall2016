/*  Created By: Ryan Spaulding
    Date Created: 9/7/16
    CSCI20
    Browne
*/

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string wordName;
    string favoritePie;
    int userNumber = 0;
    float userDecimal = 0.0;
    char specialSymbol = '!' ;
 
//inputs    
    cout << "Enter your name: ";
    getline (cin, wordName);
    cout << "Enter your favorite number: ";
    cin  >> userNumber;
    cout << "Enter a decimal: ";
    cin  >> userDecimal;
    cout << "Enter an exclamation point: ";
    cin  >> specialSymbol;
    
//output
    cout << "Hello " << wordName << specialSymbol << endl;
    cout << userNumber << " is a great number." << endl;
    cout << "However, I only have about " << userDecimal << " of my patience left" << specialSymbol << endl;
    
    return 0;
}