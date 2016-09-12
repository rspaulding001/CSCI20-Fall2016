/*Created By: Ryan Spaulding
Date Created: 9/7/16
CSI20
Browne */

#include <iostream>
#include <string>
using namespace std;

struct MonsterData {
    string monName;
    string monHead;
    string monEyes;
    string monEars;
    string monNose;
    string monMouth;
};


int main() {
    
    MonsterData MonsterOne;

//MonsterOne data collection
    cout << "Name your monster: ";
    cin  >> MonsterOne.monName;
    cout << "What style is your Monster's head?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monHead;
    cout << "What style is your Monster's eyes?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monEyes;
    cout << "What style is your Monster's ears?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monEars;
    cout << "What style is your Monster's nose?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monNose;
    cout << "What style is your Monster's mouth?: " << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monMouth;
    
//output for MonsterOne
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterOne.monName << ": " << MonsterOne.monHead << ", " << MonsterOne.monEyes << ", " << MonsterOne.monEars << ", " << MonsterOne.monNose << ", " << MonsterOne.monMouth << "." << endl;
    
        MonsterData MonsterTwo;

//MonsterTwo data collection
    cout << "Name your second monster: ";
    cin  >> MonsterTwo.monName;
    cout << "What style is your Monster's head?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monHead;
    cout << "What style is your Monster's eyes?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monEyes;
    cout << "What style is your Monster's ears?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monEars;
    cout << "What style is your Monster's nose?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monNose;
    cout << "What style is your Monster's mouth?: " << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monMouth;
    
//output for MonsterTwo
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterTwo.monName << ": " << MonsterTwo.monHead << ", " << MonsterTwo.monEyes << ", " << MonsterTwo.monEars << ", " << MonsterTwo.monNose << ", " << MonsterTwo.monMouth << "." << endl;
    

        MonsterData MonsterThree;

//MonsterThree data collection
    cout << "Name your third monster: ";
    cin  >> MonsterThree.monName;
    cout << "What style is your Monster's head?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monHead;
    cout << "What style is your Monster's eyes?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monEyes;
    cout << "What style is your Monster's ears?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monEars;
    cout << "What style is your Monster's nose?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monNose;
    cout << "What style is your Monster's mouth?: " << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monMouth;
    
//output for MonsterThree
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterThree.monName << ": " << MonsterThree.monHead << ", " << MonsterThree.monEyes << ", " << MonsterThree.monEars << ", " << MonsterThree.monNose << ", " << MonsterThree.monMouth << "." << endl;
    
    
            MonsterData MonsterFour;

//MonsterFour data collection
    cout << "Name your fourth monster: ";
    cin  >> MonsterFour.monName;
    cout << "What style is your Monster's head?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monHead;
    cout << "What style is your Monster's eyes?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monEyes;
    cout << "What style is your Monster's ears?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monEars;
    cout << "What style is your Monster's nose?: "  << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monNose;
    cout << "What style is your Monster's mouth?: " << endl << "Zombus, Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monMouth;
    
//output for MonsterFour
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterFour.monName << ": " << MonsterFour.monHead << ", " << MonsterFour.monEyes << ", " << MonsterFour.monEars << ", " << MonsterFour.monNose << ", " << MonsterFour.monMouth << "." << endl;
    
    
//All monster data released at once.
    cout << "Together your Monsters are: " << endl;
    cout << MonsterOne.monName << ": " << MonsterOne.monHead << ", " << MonsterOne.monEyes << ", " << MonsterOne.monEars << ", " << MonsterOne.monNose << ", " << MonsterOne.monMouth << "." << endl;
    cout << MonsterTwo.monName << ": " << MonsterTwo.monHead << ", " << MonsterTwo.monEyes << ", " << MonsterTwo.monEars << ", " << MonsterTwo.monNose << ", " << MonsterTwo.monMouth << "." << endl;
    cout << MonsterThree.monName << ": " << MonsterThree.monHead << ", " << MonsterThree.monEyes << ", " << MonsterThree.monEars << ", " << MonsterThree.monNose << ", " << MonsterThree.monMouth << "." << endl;
    cout << MonsterFour.monName << ": " << MonsterFour.monHead << ", " << MonsterFour.monEyes << ", " << MonsterFour.monEars << ", " << MonsterFour.monNose << ", " << MonsterFour.monMouth << "." << endl;
    
    return 0;
}