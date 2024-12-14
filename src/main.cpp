#include <cstdlib>
#include <unistd.h>
#include "renderer.h"

const int width = 32;
const int height = 32;

const char full_tile = '#';
const char empty_tile = '-';

bool* board;
bool** buffer;

renderer* renderer;

void draw_frame();
void update_buffer();

int main(){
  bool board[width][height] = {};
  bool buffer[width][height] = {};
  
  renderer = new class::renderer(width, height, *board, full_tile, empty_tile);
  

  board[0][0] = true;
  board[1][0] = true; 
  board[2][0] = true;
  board[0][1] = true;
  board[1][1] = true;
  board[16][16] = true;

  /*board[831] = true;
  board[830] = true;
  board[829] = true;
  board[828] = true;*/
  
  //std::cout << " ";
    while (true){
    renderer->draw_frame(); 
    update_buffer(board);
    for (int x = 0; x < width; x++){
      for (int y = 0; y < height; y++){
        board[x][y] = buffer[x][y];
        buffer[x][y] = false;
      }
    }  
    usleep(500000);
  }
  return 0;
}

// Writes a new tick of data to the buffer.
void update_buffer(bool** board){
  for (int x = 0; x < width; x++){
    for (int y = 0; y < height; y++){
      // The number of alive neighbors.
      int num_of_neighbors = 0;
      // Checking top neighbor.
      if (y + 1 < height && board[x][y + 1] == 1){
        num_of_neighbors++;
      }
      // Checking bottem neighbor.
      if (y - 1 > 0 && board[x][y - 1] == 1){
        num_of_neighbors++;
      }
      // Checking left neighbor.
      if (x - 1 > 0 && board[x - 1][y] == 1){
        num_of_neighbors++;
      }
      // Checking right neighbor.
      if (x + 1 < width && board[x + 1][y] == 1){
        num_of_neighbors++;
      }
      // Checking upper-left neighbor.
      if (y + 1 < height && x - 1 > 0 && board[x - 1][y + 1] == 1){
        num_of_neighbors++;
      }
      // Checking upper-right neighbor.
      if (y + 1 < height && x + 1 < width && board[x + 1][y + 1] == 1){
        num_of_neighbors++;
      }
      // Checking bottem-left neighbor.
        if (y - 1 > 0 && x - 1 > 0 && board[x - 1][y - 1] == 1){
        num_of_neighbors++;
      }
      // Checking bottem-right neighbor.
      if (y - 1 > 0 && x + 1 < width && board[x + 1][y - 1] == 1){
        num_of_neighbors++;
      }
      if (board[x][y] == 1 && num_of_neighbors >= 1 && num_of_neighbors <= 3){
        std::cout << width*x + y;
        std::cout << " ";
        std::cout << num_of_neighbors << std::endl;
        buffer[width*x + y] = true;
      } else if (!board[width*x + y] && num_of_neighbors == 3) {
        buffer[width*x + y] = true;
      } else {
        buffer[width*x + y] = false;
      }
      
    }
  }
}
