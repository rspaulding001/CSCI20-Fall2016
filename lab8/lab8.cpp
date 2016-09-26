/*Created By: Ryan Spaulding
Date Created: 9/25/16
CSI20
Browne */

#include <iostream>
using namespace std;

void ToKilo (double numPounds, double numTotalKilos = 0) {
    
    cout << "Enter Pounds: " << endl;
    cin >> numPounds;
    
    numTotalKilos = numPounds / 2.20462;
    cout << numPounds << " Pounds is " << numTotalKilos << " Kilograms." << endl;
    
    return;
}

void ToPounds(double numKilo, double numTotalPounds = 0) {
   
    cout << "Enter Kilograms: " << endl;
    cin >> numKilo;
    
    numTotalPounds = numKilo * 2.20462;
    cout << numKilo<< " Kilograms is " << numTotalPounds << " Pounds." << endl;
    
    return;
}


int main()
{
   
   ToKilo(0,0);
   ToPounds(0,0);
    
    
    
    return 0;
}