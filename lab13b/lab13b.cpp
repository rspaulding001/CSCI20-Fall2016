/*Created By: Ryan Spaulding
Date Created: 10/17/16
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



// for (hours == 1; hours < 3; hours++) {   //for printing every minute between 1pm and 2:59pm
//     minutes = 0;                        // initializes variable 'minutes'
        
//         for(minutes == 0; minutes <= 59; minutes++){     //for incrementing the 'minutes' variable
//             cout << hours << ":";
            
//             if (minutes <= 9){                        //adds another 0 for output to be x:01 through x:09
//                 cout << "0" << minutes << " pm" << endl;
//             }
//             else {
//                 cout << minutes << " pm" << endl;
//             }
//         }
// } 
// return 0; 
// }



cout << "Enter a start hour in military time: " << endl;
cin  >> startHour >> c1 >> startMinutes;
cout << "Enter an end hour in military time: " << endl;
cin  >> endHour >> c1 >> endMinutes;
cout << endl;

for (startHour == 0; startHour != endHour; startHour++ , startMinutes = startMinutes - 60) {
    for (startMinutes == 0; startMinutes <= 59; startMinutes = startMinutes + 15) {
        if (startMinutes < 10){
            cout << startHour << ":0" << startMinutes << endl;
        }
        else {
            cout << startHour << ":" << startMinutes << endl;
        }
        
    }
    
    if(startHour >= 24) {
        startHour = startHour - 24;
    }
    
}

    return 0;
}
