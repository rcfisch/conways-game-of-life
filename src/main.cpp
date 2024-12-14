#include <cstdlib>
#include <ostream>
#include <unistd.h>
#include "renderer.h"

const int width = 32;
const int height = 32;

const char full_tile = '#';
const char empty_tile = ' ';

renderer* renderer;

bool (&update_buffer(bool** board))[width][height];

int main(){
  bool board[width][height] = {false}; 
  bool buffer[width][height] = {false};
  
  renderer = new class::renderer(width, height, full_tile, empty_tile);

  board[3][1] = true;
  board[3][2] = true;
  board[3][3] = true;
  board[2][3] = true;
  board[1][2] = true;
  //board[16][2] = true;

  
  while (true){

    renderer->draw_frame(*board, "");

    // Update Buffer: 
    for (int x = 0; x < width; x++){
      for (int y = 0; y < height; y++){
        // The number of alive neighbors.
        int num_of_neighbors = 0;
      
        for(int x_offset = -1; x_offset < 2; x_offset++){
          for (int y_offset = -1; y_offset < 2; y_offset++){
            if (!(x_offset == 0 && y_offset == 0)){
              if ((x + x_offset > -1 && x + x_offset < width) && (y + y_offset > -1 && y + y_offset < height)){
                if (board[x + x_offset][y + y_offset]){
                  num_of_neighbors++;
                }
              }
            }
          }
        }
        /*if (num_of_neighbors >= 2 && num_of_neighbors <= 3){
          buffer[x][y] = true;
        }*/
        if (board[x][y]){
          if (num_of_neighbors >= 2 && num_of_neighbors <= 3){
            buffer[x][y] = true;
          }
        } else if (num_of_neighbors == 3) {
          buffer[x][y] = true;
        }
      }
    }

    for (int x = 0; x < width; x++){
      for (int y = 0; y < height; y++){
        board[x][y] = buffer[x][y];
        buffer[x][y] = false;
      }
    }  
    usleep(250000);
  }
  return 0;
}

// Writes a new tick of data to the buffer.
