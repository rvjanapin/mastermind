#include <iostream>
#include <stdlib.h>
using namespace std;

const char secret[3] = {'Y', 'O', 'V'}; //the set of colors to guess
short int mainloop = 0; //important LCV!!
bool win = false;

//insertion sort
void insertion_sort(int arr[]){
    int size = 3;
    for(int r = 0 ; r < size; r++){ //entire loop
        for(int i = 0; i <= r; i++){ //"sorted loop"
            if(arr[r] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[r];
                arr[r] = temp;
            }
        }
    }
}

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

string input(){ 
    string input;
    //this input is very important for the logic part of the code

    cout << "Which colors should you guess? (R, O, Y, G, B, V): ";
    cin >> input;

    for(int i = 1 ; i <= 3; i++){
        board[mainloop][i] = input[i-1];
    }
	return input;
}

void logic(string input){
	int point[3] = {0,0,0};
  	char point_char[3];
	for(int i=0; i < 3; i++){
		
		//if-present loop 
        for(int j = 0 ; j < 3 ; j++){
			if(input[i] == secret[j]){
				point[i] += 1;
				break;
			}
		}
    }
    //if-same-place loop
	for(int i = 0 ; i < 3 ;i++){
		if(input[i] == secret[i]){
			point[i] += 1;
		}
	}
	//sorting algorithm
	insertion_sort(&point[0]);

  	for (int i = 0; i < 3; i++) {
    	point_char[i] = point[i] + '0';
  	}

  	for (int i = 0; i < 3; i++){
    	board[mainloop][i+4] = point_char[i];
  	}
  
	//if all elements are2 = bool win = true;
	for (int i = 0; i < 3; i++) {
		if (point[i] == 2){
    		win = true;
		}
    else {
      win = false;
	  break;
    }
   	}	
}


//for main function do not put anything other than the main intro and the mainloop
//keep most of the logic in functions!!
int main(){ 
    cout << "Mastermind Game!" << endl;
	string uinput; 
    for(int i = 0; i < 7; i++){
        board_out();
        uinput = input();
		logic(uinput);
		if(win){
			board_out();
      		cout << "You Win!" << endl;
      		return 0;
		}
        mainloop++;
    }
    board_out();
	cout << "You lose!" << endl;
    //add logic to end program if not won
}