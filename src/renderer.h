#pragma once
#include <iostream>
#include <curses.h>

class renderer{
public: 
  renderer(int _width, int _height, char full_tile, char emtpy_tile);
public:
  void draw_frame(bool* board, std::string mode);
private:
  int width;
private:
  int height;
private:
  char full_tile;
private:
  char empty_tile;
};
