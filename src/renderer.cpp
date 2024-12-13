#include "renderer.h"

const char empty_tile = '-';
const char full_tile = '#';

/*int width;
int height;
bool* board;*/
renderer::renderer(int _width, int _height, bool* _board){
  width = _width;
  height = _height;
  board = _board;
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
