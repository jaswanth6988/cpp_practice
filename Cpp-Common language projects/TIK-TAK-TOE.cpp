
void drawboard(char *spaces);
void playermoves(char *spaces, char player);
void computermoves(char *spaces, char computer);
bool cheackwinner(char *spaces, char player , char computer);
bool cheackTie(char *spaces, char player, char computer);

int main (){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawboard(spaces);
    while(running){
        playermoves(spaces, player);
        drawboard(spaces);
        if(cheackwinner(spaces, player,computer)){
            running =false;
            break;
        }else if(cheackTie(spaces)){
            running = false;
            break;
        }
        computermoves(spaces,computer);
        drawboard(spaces);
        if(cheackwinner(spaces, player,computer)){
            running =false;
            break;
        }else if(cheackTie(spaces)){
            running = false;
            break;
        }   
    
    }
    cout<<"thanks for playing";
    

    return 0;

}

void drawboard(char *spaces){
    cout<<"     |      |      "<<"\n";
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"   |   "<<spaces[2]<<"\n";
    cout<<"_____|______|_____"<<"\n";
    cout<<"     |      |      "<<"\n";
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"   |   "<<spaces[5]<<"\n";
    cout<<"_____|______|_____"<<"\n";
    cout<<"     |      |      "<<"\n";
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"   |   "<<spaces[8]<<"\n";   
    cout<<"     |      |      "<<"\n";
    
}
void playermoves(char *spaces, char player){

    int number;
    do{
        cout<<"Enter a spot to move: "<<"\n";
        cin>>number;
        number--;
        if(spaces[number]== ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number <8);
}
void computermoves(char *spaces, char computer){
    int number;
    srand(time(0));
    while(true){
    number = rand() % 9;
    return number;
}
}
bool cheackwinner(char *spaces, char player, char computer){

    if((spaces[0]!= ' ')&&(spaces[0]==spaces[1] )&&( spaces[1] == spaces[2])){
        spaces[0] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[3]!= ' ')&&(spaces[3]==spaces[4] )&&( spaces[4] == spaces[5])){
        spaces[3] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[6]!= ' ')&&(spaces[6]==spaces[7] )&&( spaces[7] == spaces[8])){
        spaces[6] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[0]!= ' ')&&(spaces[0]==spaces[3] )&&( spaces[3] == spaces[6])){
        spaces[0] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[1]!= ' ')&&(spaces[1]==spaces[4] )&&( spaces[4] == spaces[7])){
        spaces[1] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[2]!= ' ')&&(spaces[2]==spaces[5] )&&( spaces[5] == spaces[8])){
        spaces[2] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }   
    else if((spaces[0]!= ' ')&&(spaces[0]==spaces[4] )&&( spaces[4] == spaces[8])){
        spaces[2] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }
    else if((spaces[2]!= ' ')&&(spaces[2]==spaces[4] )&&( spaces[4] == spaces[6])){
        spaces[2] == player ? cout<<"you win\n" : cout<< "you lose\n";
    }else{
        return false;
    }
return 0;

}
bool cheackTie(char *spaces, char player, char computer){
    for(int i=0;i<9;i++){
        if(spaces[i]==' ') return false;
    }
    cout<<"IT is a tie\n";
    return true;
return 0;


}


// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// void drawBoard(char *spaces);
// void playerMoves(char *spaces, char player);
// void computerMoves(char *spaces, char computer);
// bool checkWinner(char *spaces, char player, char computer);
// bool checkTie(char *spaces);

// int main() {
//     char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
//     char player = 'X';
//     char computer = 'O';
//     bool running = true;

//     drawBoard(spaces);

//     while (running) {
//         playerMoves(spaces, player);
//         drawBoard(spaces);
//         if (checkWinner(spaces, player, computer)) {
//             running = false;
//             break;
//         } else if (checkTie(spaces)) {
//             running = false;
//             break;
//         }

//         computerMoves(spaces, computer);
//         drawBoard(spaces);
//         if (checkWinner(spaces, player, computer)) {
//             running = false;
//             break;
//         } else if (checkTie(spaces)) {
//             running = false;
//             break;
//         }
//     }

//     cout << "Thanks for playing\n";
//     return 0;
// }

// void drawBoard(char *spaces) {
//     cout << "     |     |     \n";
//     cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
//     cout << "_____|_____|_____\n";
//     cout << "     |     |     \n";
//     cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
//     cout << "_____|_____|_____\n";
//     cout << "     |     |     \n";
//     cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
//     cout << "     |     |     \n";
// }

// void playerMoves(char *spaces, char player) {
//     int number;
//     do {
//         cout << "Enter a spot (1-9): ";
//         cin >> number;
//         number--;
//         if (number >= 0 && number < 9 && spaces[number] == ' ') {
//             spaces[number] = player;
//             break;
//         }
//     } while (true);
// }

// void computerMoves(char *spaces, char computer) {
//     int number;
//     srand(time(0));
//     while (true) {
//         number = rand() % 9;
//         if (spaces[number] == ' ') {
//             spaces[number] = computer;
//             break;
//         }
//     }
// }

// bool checkWinner(char *spaces, char player, char computer) {
//     char winner = ' ';
    
//     int winConditions[8][3] = {
//         {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  // Rows
//         {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  // Columns
//         {0, 4, 8}, {2, 4, 6}              // Diagonals
//     };

//     for (auto &condition : winConditions) {
//         if (spaces[condition[0]] != ' ' && spaces[condition[0]] == spaces[condition[1]] && spaces[condition[1]] == spaces[condition[2]]) {
//             winner = spaces[condition[0]];
//             break;
//         }
//     }

//     if (winner == player) {
//         cout << "You win!\n";
//         return true;
//     } else if (winner == computer) {
//         cout << "You lose!\n";
//         return true;
//     }
    
//     return false;
// }

// bool checkTie(char *spaces) {
//     for (int i = 0; i < 9; i++) {
//         if (spaces[i] == ' ') return false;
//     }
//     cout << "It's a tie!\n";
//     return true;
// }
