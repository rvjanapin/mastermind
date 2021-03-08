#include <iostream>
#include <stdlib.h>
using namespace std;

const char secret[3] = {'R', 'G', 'B'}; //the set of colors to guess
short int mainloop = 0; //important LCV!!

char board[7][7] = {
    {'1' , '_', '_', '_', '0', '0', '0' } ,
    {'2' , '_', '_', '_', '0', '0', '0' } ,
    {'3' , '_', '_', '_', '0', '0', '0' } ,
    {'4' , '_', '_', '_', '0', '0', '0' } ,
    {'5' , '_', '_', '_', '0', '0', '0' } ,
    {'6' , '_', '_', '_', '0', '0', '0' } ,
    {'7' , '_', '_', '_', '0', '0', '0' } ,
}; //array containing of the given characters (this is what we will alter)

//printing the board
void board_out (){    
    for(int i = 0 ; i < 7; i++){
        cout << "\t -------------------"  << endl; 
        cout << "\t | ";
        for(int k = 0 ; k < 7 ; k++){
            cout << board[i][k] << ' ';
        }
        cout << " |" << endl;
    }
}

void input(){ 
    string input;
    //this input is very important for the logic part of the code

    cout << "Which colors should you guess? (R, O, Y, G, B, V): ";
    cin >> input;

    for(int i = 1 ; i <= 3; i++){
        board[mainloop][i] = input[i-1];
    }

}




//for main function do not put anything other than the main intro and the mainloop
//keep most of the logic in functions!!
int main(){ 
    cout << "Mastermind Game!" << endl;
    for(int i = 0; i < 7; i++){
        board_out();
        input();
        mainloop++;
        system("cls||clear");
    }
    board_out();
    //add logic to end program if not won
}