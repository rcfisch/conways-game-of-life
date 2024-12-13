#pragma once
#include <iostream>

class renderer{
public: 
  renderer(int _width, int _height, bool* _board);
public:
  void draw_frame();
private:
  int width;
private:
  int height;
private:
  bool* board;
};
