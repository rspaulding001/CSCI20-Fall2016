/*Created By: Ryan Spaulding
Date Created: 10/23/16
CSI20
Browne */
//Guessing Game

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;



class ComputerInfo {
    private:
        int startNum;
        int endNum;
        
    public:
        //set the beginging of the guessing range
        void SetStartNum(int X) {
                cout << "Enter a starting number to guess between: " << endl;
                cin  >> X;
                startNum = X;
        }
        // sets the end of the guessing range
        void SetEndNum(int Y) {                 
                cout << "Enter an ending number to guess between: " << endl;    
                cin  >> Y;
                endNum = Y;
        }
        int GetStartNum() {
            return startNum;
        }
        int GetEndNum() {
            return endNum;
        }
        
};


int main() {
    //initialization of all variables
   int startNum =0;
   int endNum =0;
   int computerNum = 0;
   int userNum = 0;
   int numGuesses =0;
   int score =0;
   int percent =0;
   
   ComputerInfo Game;
   Game.SetStartNum(startNum);
   Game.SetEndNum(endNum);
   //calculates the computer's random number within the user's given range
    computerNum = (rand() % ((Game.GetEndNum() - Game.GetStartNum()) + 1) + Game.GetStartNum());
     
            //game continues until the user matches the computer's number
            while (userNum != computerNum) {
                cout << "Enter a number to guess" << endl;
                cin  >> userNum;
                //if the user's number is greater than the computer's it prints 'lower'
                if (userNum > computerNum) {
                    cout << "Lower" << endl << endl;
                    numGuesses++;
                }
                //if the user's number is less than the computer's it prints 'higher'
                else if (userNum < computerNum) {
                    cout << "Higher" << endl << endl;
                    numGuesses++;
                }
                //if the user's number is the same as the computer's the game prints 'winner' and ends
                else if (userNum == computerNum) {
                    cout << "Winner" << endl << endl;
                    numGuesses++;
                }
            }
                //score calculation
                cout << "You guessed a total of " << numGuesses << " times" <<endl;
                    score = Game.GetEndNum() - numGuesses;
                cout << "That is a score of " << score << " out of " << Game.GetEndNum() << endl;
                //percentage calculation
                    percent = (score / Game.GetEndNum()) * 100;
                cout << percent <<"%";
return 0;
}