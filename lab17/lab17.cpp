/*Created By: Ryan Spaulding
Date Created: 11/8/16
CSI20
Browne */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>
using namespace std;

int main () {
    
    int i = 0;
    char firstName[11];
    char lastName[21];
    char userName1[30];
    char userName2[30];
    char userName3[30];
    
    cout << "This is the awesomeness website." << endl;
    cout << "To join I need build your username!" << endl;
    cout << "What is your first name?" << endl;
    cin  >> firstName;
    
    for (i=0; firstName[i] != '\0'; i++) {
    }
    
    while (i>10) {
        cout << "Your name is just a bit too long for this website." << endl;
        cout << "Can you enter a name under TEN characters please." << endl;
        cin >> firstName;
        for(i=0; firstName[i] != '\0'; i++) {
        }
    }
    i=0;
    
    cout << firstName << " is a wonderful name!" << endl;
    cout << "I bet your last name is just as nice!" << endl;
    cout << "What is it?" << endl;
    cin  >> lastName;
    
    for(i=0;lastName[i] != '\0'; i++) {
    }
    
    while (i>20) {
        cout << "Your name is just a bit too long for this website." << endl;
        cout << "Can you enter a name under TWENTY characters please." << endl;
        cin >> lastName;
        for(i=0; lastName[i] != '\0'; i++) {
        }
    }
    i=0;
    cout << endl;
    cout << "Here are three options for your username!" << endl;
    //first username
    strncat(userName1, firstName, 2);
    strcat(userName1, lastName);
    cout << userName1 << endl;
    
    //2nd username
    strcpy(userName2,firstName);
    strcat(userName2, lastName);
    cout << userName2 << endl;
    
    //3rd username
    strncat(userName3, firstName, 1);
    strcat(userName3, lastName);
    cout << userName3 << endl;
    
    

    
return 0;
}