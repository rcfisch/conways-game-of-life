#include "renderer.h"

const char empty_tile = '-';
const char full_tile = '#';

/*int width;
int height;
bool* board;*/
renderer::renderer(int _width, int _height, bool* _board, char _full_tile, char _empty_tile){
  width = _width;
  height = _height;
  board = _board;
  full_tile = _full_tile;
  empty_tile = _empty_tile;
}

void renderer::draw_frame(){
  system("clear");
  for (int y = 0; y < height; y++){
    for (int x = 0; x < width; x++){
      if (board[y*height + x]){
        std::cout << " ";
        std::cout << full_tile;
      } else{
        std::cout << " ";
        std::cout << empty_tile;
      }
    }
    std::cout << std::endl;
  }
}
