/*Created By: Ryan Spaulding
Date Created: 10/12/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

int main () {
    
    int hours = 1;
    int minutes = 0;
    int startHour = 0;
    int endHour = 0;
    int startMinutes = 0;
    int endMinutes = 0;
    char c1;

/*
while (hours < 2) {
    minutes = 0;
        
        while(minutes <= 59){
            cout << hours << ":";
            
            if (minutes <= 9){
                cout << "0" << minutes << endl;
            }
            else {
                cout << minutes << endl;
            }
        ++minutes;
        }
        ++hours;
};    
*/    
    
cout << "Enter a start hour in military time: " << endl;
cin  >> startHour >> c1 >> startMinutes;
cout << "Enter an end hour in military time: " << endl;
cin  >> endHour >> c1 >> endMinutes;




while (startHour != endHour) {
    while (startMinutes <= 59) {
        if (startMinutes < 10){
            cout << startHour << ":0" << startMinutes << endl;
        }
        else {
            cout << startHour << ":" << startMinutes << endl;
        }
        
        startMinutes = startMinutes + 15;
    }
    startHour ++;
    
    if(startHour >= 24) {
        startHour = startHour - 24;
    }
    
}

    return 0;
}