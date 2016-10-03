/*Created By: Ryan Spaulding
Date Created: 10/3/16
CSI20
Browne */

#include <iostream>
using namespace std;

int main() {
    int suzyAge = 25;
    int johnAge = 21;

cout << "Problem 1" << endl;
cout << "Suzy age < John age" << endl << (suzyAge < johnAge) << endl;
cout << "John is not older than Suzy." << endl << endl;

    int varX = 7;
    int varY = 7;
cout << "Problem 2" << endl;
cout << "(varX >= varY)" << endl << (varX >= varY) << endl;
cout << "varX is greater than or equal to varY. " << endl << endl;

    int varA = 1;
    int varB = 9;
cout << "Problem 3" << endl;
cout << "(varA == varB)" << endl << (varA == varB) << endl;
cout << "varA is not equal to varB." << endl << endl;

    int limit = 20;
    int count = 10;
cout << "Problem 4" << endl;
cout << "((limit*count)/2 > 0)"<< endl << ((limit*count)/2 > 0)<< endl;
cout << "limit multiplied by count is greater than 0." << endl << endl;

    int varT = -4;
    int varZ = 0;
cout << "Problem 5" << endl;
cout << "(varT > 5 || varZ < 2)" << endl << (varT > 5 || varZ < 2) << endl;
cout << "varZ is less than 2." << endl << endl;

    int varVariable = -5;
cout << "Problem 6" << endl;
cout << "(!(varVariable >0))" << endl << (!(varVariable >0)) << endl;
cout << "varVariable is not greater than 0." << endl << endl;

    int varV = 16;
cout << "Problem 7" << endl;
cout << "(varV/4 < 8 && varV >= 4)" << endl << (varV/4 < 8 && varV >= 4) << endl;
cout << "varV/4 is less than 8 and varV is greater than or equal to 4." << endl << endl;


    int varQ = -2;
    int varF = 5;
cout << "Problem 8" << endl;
cout << "(varQ*varF < 10 || varF*varZ < 10)" << endl << (varQ*varF < 10 || varF*varZ < 10) << endl;
cout << "varQ multiplied by varF is less than 10 (true) OR" << endl; 
cout << "varF multiplied by varZ is less than 10 (true)" << endl << endl;

    int varJ = -2;
    int varK = 5;
    int varL = 4;
cout << "Problem 9" << endl;
cout << "(!(varJ*varL < 10) || varF/varQ * 4 < varF *2)" << endl << (!(varJ*varL < 10) || varF/varQ * 4 < varF *2) << endl;
cout << "not( -8 < 10 (false) OR (5/-2) < 10 (true)" << endl << endl;


    return 0;
}