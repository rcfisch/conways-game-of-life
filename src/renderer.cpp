#include "renderer.h"
#include <ostream>

renderer::renderer(int _width, int _height, char _full_tile, char _empty_tile){
  width = _width;
  height = _height;
  full_tile = _full_tile;
  empty_tile = _empty_tile;
}

void renderer::draw_frame(bool* board , std::string mode){
  // Clears the last frame.
  system("clear");
  std::cout << std::endl;
  // Draws each line of the board from the top down.
  for (int y = 0; y < height; y++){
    std::cout << height - y;
    if (height - y < 10){
      std::cout << " ";
    }
    
    // Draws the board tiles.
    for (int x = 0; x < width; x++){
      if (board[x * width + y]){
        std::cout << "  ";
        std::cout << full_tile;
      } else{
        std::cout << "  ";
        std::cout << empty_tile;
      }
    }

    std::cout << std::endl;
  }
  // Draws the bottem of the boarder.
  std::cout << "    ";
  for (int i = 0; i < width; i++){
    std::cout << i + 1;
    std::cout << " ";
  }
}
