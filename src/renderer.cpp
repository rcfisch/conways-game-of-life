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
  // Draws the mode of the game. (paused, playing, editing, etc...)
  if (mode != ""){
    for (int i = 0; i < width - mode.length()/2 - 1; i++){
      std::cout << " ";
    }
    std::cout << "("; 
    std::cout << mode;
    std::cout << ")" << std::endl;
  } else {
    std::cout << std::endl;
  }
  // Draws the top of the border.
  std::cout << "o";
  for (int i = 0; i < width*2; i++){
    std::cout << "-";
  }
  std::cout << "o" << std::endl;
  // Draws each line of the board from the top down.
  for (int y = 0; y < height; y++){
    // Draws the left side of the boarder.
    std::cout << "|";
    
    // Draws the board tiles.
    for (int x = 0; x < width; x++){
      if (board[x * width + y]){
        std::cout << " ";
        std::cout << full_tile;
      } else{
        std::cout << " ";
        std::cout << empty_tile;
      }
    }

    // Draws the right side of the boarder.
    std::cout << "|";
    std::cout << std::endl;
  }
  // Draws the bottem of the boarder.
  std::cout << "o";
  for (int i = 0; i < width*2; i++){
    std::cout << "-";
  }
  std::cout << "o" << std::endl;

}
