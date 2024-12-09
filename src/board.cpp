#include "board.h"

struct board{
  int width;
  int height;

  bool tiles;
};

board* create_board(int width, int height){
  board* game_board = new board();
  
  game_board->width = width;
  game_board->height = height;

  game_board->tiles = new bool[width * height];

  return game_board; 
}
