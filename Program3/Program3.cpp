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
        int computerNum;
        
    public:
        //default constructor
        ComputerInfo();
        void SetStartNum(int X);
        void SetEndNum( int Y);
        void SetComputerNum();
        double GetComputerNum();
        int GetEndNum();
        int GetStartNum();
};
        //default constructor
        ComputerInfo::ComputerInfo(){
            startNum = 1;
            endNum = 10;
            return;
        }
        //set the beginging of the guessing range
        void ComputerInfo::SetStartNum(int X) {
            startNum = X;
        }
        // sets the end of the guessing range
        void ComputerInfo::SetEndNum(int Y) {
            endNum = Y;
        }
        void ComputerInfo::SetComputerNum() {
            computerNum = rand() % (GetEndNum() - GetStartNum() + 1) + GetStartNum();
        }
        double ComputerInfo::GetComputerNum(){
            return computerNum;
        }
        int ComputerInfo::GetStartNum() {
            return startNum;
        }
        int ComputerInfo::GetEndNum() {
            return endNum;
        }
        



int main() {
    //initialization of all variables
    int startNum =1;
    int endNum =10;
    int userNum = 0;
    int numGuesses =0;
    double score =0.0;
    double percent =0.0;
   
   ComputerInfo Game;
   
        cout << "Enter a begining range number: " << endl;
        cin  >> startNum;
    Game.SetStartNum(startNum);
    
        cout << "Enter an ending range number: " << endl;
        cin  >> endNum;
    Game.SetEndNum(endNum);
    
    
   //calculates the computer's random number within the user's given range
    Game.SetComputerNum();
   
    
     cout << "Enter a number: " << endl;
     cin  >> userNum;
            //game continues until the user matches the computer's number
            while (userNum != Game.GetComputerNum()) {

                //if the user's number is greater than the computer's it prdoubles 'lower'
                if (userNum > Game.GetComputerNum()) {
                    cout << "Lower" << endl << endl;
                    numGuesses++;
                }
                //if the user's number is less than the computer's it prdoubles 'higher'
                else if (userNum < Game.GetComputerNum()) {
                    cout << "Higher" << endl << endl;
                    numGuesses++;
                }
                //if the user's number is the same as the computer's the game prdoubles 'winner' and ends
                else if (userNum == Game.GetComputerNum()) {
                    cout << "Winner" << endl << endl;
                    numGuesses++;
                }
                cout << "Enter a number to guess" << endl;
                cin  >> userNum;
                numGuesses++;
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