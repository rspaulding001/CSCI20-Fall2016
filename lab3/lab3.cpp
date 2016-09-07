/*Created By: Ryan Spaulding
Date Created: 9/7/16
CSI20
Browne */

#include <iostream>
using namespace std;

int main() 
{
    int numCents = 0;
    int numQuarters = 0;
    int numDimes = 0;
    int numNickles = 0;
    int numPennies = 0;
    float numFee = 0.0;
    float numTotal = 0.0;
    
    cout << "Enter how many cents: " << endl;
    cin  >> numCents;
    
    //Calculations
    numQuarters = numCents / 25;
    numDimes    = (numCents - (numQuarters * 25)) / 10;
    numNickles  = (numCents - (numQuarters * 25) - (numDimes * 10)) / 5;
    numPennies  = (numCents - (numQuarters * 25) - (numDimes * 10) - (numNickles * 5));
    numFee = numCents * 0.109;
    numTotal = numCents - numFee;
    
    cout << "Quarters: "      << numQuarters << endl;
    cout << "Dimes: "         << numDimes    << endl;
    cout << "Nickles: "       << numNickles  << endl;
    cout << "Pennies: "       << numPennies  << endl;
    cout << "Fee: "           << numFee      << endl;
    cout << "Total Voucher: " << numTotal    << " cents" << endl;
    
    
    return 0;
}