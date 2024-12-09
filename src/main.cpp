#include <iostream>
#include <unistd.h>
#include "board.h"

using namespace std;

board* game_board;

int main(){
  string temp_width;
  string temp_height;

  cout << "Input board width: " << endl;
  cin >> temp_width;
  
  cout << "Input board width: " << endl;
  cin >> temp_height;

  game_board = create_board(stoi(temp_width), stoi(temp_height));

  

  return 0;   
}

