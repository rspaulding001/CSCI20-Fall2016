/*Created By: Ryan Spaulding
Date Created: 10/17/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

int main () {
    
    int num;                // initialization
    int sum=0;  
 
 
    cout << "Enter numbers separated by spaces"             
    << " and terminated with a negative number." << endl;         
 
           
    cin >> num;             // read first number 
 
 
    while (num >= 0)  {               
                   
        sum = sum + num;   // add in to the sum              
        cin >> num;        // read in next number (getting ready for next loop test)
    }                
    cout << "Sum was " << sum << endl;             
    
return 0;
}