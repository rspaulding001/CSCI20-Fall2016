/*Created By: Ryan Spaulding
Date Created: 9/12/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string userName;
    float userHours = 0;
    float salRate   = 0;
    float grossPay  = 0;
    float grossTax  = 0;
    float netPay    = 0;
    
    cout << "What is the Employee Name?: " << endl; 
    getline(cin, userName);
    cout << "How many hours did this employee work?: " << endl;
    cin  >> userHours;
    cout << "How much is their salary rate?: " << endl;
    cin  >> salRate;
    
    grossPay = userHours * salRate;
    grossTax = grossPay * 0.17;
    netPay = grossPay - grossTax;

//Wage Slip 
    cout << "Employee Name: " << userName << endl;
    cout << "Hours: " << userHours << endl;
    cout << "Salary Rate: $" << salRate << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Net Pay: $" << netPay << endl;
    
    return 0;
}