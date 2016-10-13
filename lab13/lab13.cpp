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
while (hour < 2) {
    minute = 0;
        
        while(minute <= 59){
            cout << hour << ":";
            
            if (minute <= 9){
                cout << "0" << minute << endl;
            }
            else {
                cout << minute << endl;
            }
        ++minute;
        }
        ++hour;
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