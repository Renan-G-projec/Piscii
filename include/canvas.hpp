// Ad Maiorem Dei Gloriam!
#ifndef CANVAS_HPP
#define CANVAS_HPP

#include "color.hpp"
#include <algorithm>
#include <vector>

class Canvas {
  public:
    Canvas(unsigned int width, unsigned int height);

    // For now only getters. However, is often necessary that the user may be
    // able to resize the canvas
    unsigned int getWidth() { return mWidth; }
    unsigned int getHeight() { return mHeight; }

    void setCellColor(int x, int y, Color color);
    Color getCellColor(int x, int y);

  private:
    unsigned int mWidth, mHeight;
    std::vector<Color> mData;
};

#endif
