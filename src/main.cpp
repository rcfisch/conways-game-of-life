#include <cstdlib>
#include <iostream>
#include <unistd.h>

const int width = 32;
const int height = 26;

const char empty_tile = '.';
const char full_tile = '#';

bool* board;
bool* buffer;

void draw_frame();
void update_buffer();

int main(){
  board = (bool*)malloc((width * height)*sizeof(bool));
  buffer = (bool*)malloc((width * height)*sizeof(bool));

  board[831] = true;
  board[830] = true;
  board[829] = true;
  board[828] = true;
  
  //std::cout << " ";
  draw_frame();
  /*while (true){ 
    update_buffer();
    for (int i = 0; i < width * height; i++){
      board[i] = buffer[i];
      buffer[i] = false;
    }  
    usleep(500000);
  }*/
  return 0;
}

// Draws an update of the buffer to the terminal.
void draw_frame(){
  system("clear");
  for (int x = 0; x < width; x++){
    for (int y = 0; y < height; y++){
      if (board[x*width + y]){
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

// Writes a new tick of data to the buffer.
void update_buffer(){
  for (int x = 0; x < width; x++){
    for (int y = 0; y < height; y++){
      // The number of alive neighbors.
      int num_of_neighbors = 0;
      // Checking top neighbor.
      if (y + 1 < height && board[width*x + y + 1]){
        num_of_neighbors++;
      }
      // Checking bottem neighbor.
      if (y - 1 > 0 && board[width*x + y - 1]){
        num_of_neighbors++;
      }
      // Checking left neighbor.
      if (x - 1 > 0 && board[width*(x - 1) + y]){
        num_of_neighbors++;
      }
      // Checking right neighbor.
      if (x + 1 < width && board[width*(x + 1) + y]){
        num_of_neighbors++;
      }
      // Checking upper-left neighbor.
      if (y + 1 < height && x - 1 > 0 && board[width*(x - 1) + y + 1]){
        num_of_neighbors++;
      }
      // Checking upper-right neighbor.
      if (y + 1 < height && x + 1 < width && board[width*(x + 1) + y + 1]){
        num_of_neighbors++;
      }
      // Checking bottem-left neighbor.
        if (y - 1 > 0 && x - 1 > 0 && board[width*(x - 1) + y - 1]){
        num_of_neighbors++;
      }
      // Checking bottem-right neighbor.
      if (y - 1 > 0 && x + 1 < width && board[width*(x + 1) + y - 1]){
        num_of_neighbors++;
      }
      if (board[width*x + y] && num_of_neighbors >= 2 && num_of_neighbors <= 3){
        buffer[width*x + y] = true;
      } else if (!board[width*x + y] && num_of_neighbors == 3) {
        buffer[width*x + y] = true;
      } else {
        buffer[width*x + y] = false;
      }
    }
  }
}
