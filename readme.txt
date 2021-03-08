KARL: 
    * Read the logic function 
    * Given the sorted point array -> Change them on the 2d array board
    * IMPORTANT VARIABLES::
        1. int mainloop
            - what turn it is 
            - what row in the 2d array

    ex.
    points = {2, 1, 0};

    char board[7][7] = {
        {'1' , '_', '_', '_', '0', '0', '0' } ,
        {'2' , '_', '_', '_', '0', '0', '0' } ,
        {'3' , '_', '_', '_', '0', '0', '0' } ,
        {'4' , '_', '_', '_', '0', '0', '0' } ,
        {'5' , '_', '_', '_', '0', '0', '0' } ,
        {'6' , '_', '_', '_', '0', '0', '0' } ,
        {'7' , '_', '_', '_', '0', '0', '0' } ,
    }; //array containing of the given characters (this is what we will alter)

    output should be:
    {'1', '_', '_', '_' , '2', '1', '0'}, .....

    implement this either inside or outside the logic() function

MIGS:
    * Create winning conditions
    * If points = {2, 2, 2} -> win
    * After 7 loops if the player hasn't had a perfect streak -> loss

