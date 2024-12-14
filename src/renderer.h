#pragma once
#include <iostream>

class renderer{
public: 
  renderer(int _width, int _height, bool* _board, char full_tile, char emtpy_tile);
public:
  void draw_frame();
private:
  int width;
private:
  int height;
private:
  bool* board;
private:
  char full_tile;
private:
  char empty_tile;
};
