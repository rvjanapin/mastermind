#include <iostream>
using namespace std;

const char secret[3] = {'R', 'G', 'B'}; //the set of colors to guess

char board[7][7] = {
    {'1' , '_', '_', '_', '0', '0', '0' } ,
    {'2' , '_', '_', '_', '0', '0', '0' } ,
    {'3' , '_', '_', '_', '0', '0', '0' } ,
    {'4' , '_', '_', '_', '0', '0', '0' } ,
    {'5' , '_', '_', '_', '0', '0', '0' } ,
    {'6' , '_', '_', '_', '0', '0', '0' } ,
    {'7' , '_', '_', '_', '0', '0', '0' } ,
}; //array containing of the given characters (this is what we will alter)

void board_out (){    //output of the board (note: try it out to see how it looks)
    for(int i = 0 ; i < 7; i++){
        cout << "\t -------------------"  << endl; 
        cout << "\t | ";
        for(int k = 0 ; k < 7 ; k++){
            cout << board[i][k] << ' ';
        }
        cout << " |" << endl;
    }
}
int main(){ //main function should only contain the main loop (for turns) 
    cout << "Mastermind Game!" << endl;
    board_out();
}