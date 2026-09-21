// Ad Maiorem Dei Gloriam!
#ifndef CANVAS_HPP
#define CANVAS_HPP

#include <color.hpp>
#include <vector>

class Canvas {
  public:
    Canvas(int width, int height);

    // For now only getters. However, is often necessary that the user may be
    // able to resize the canvas
    int getWidth();
    int getHeight();

    void setCellColor(int x, int y, Color color);
    Color getCellColor(int x, int y);

  private:
    int mWidth, mHeight;
    std::vector<std::uint8_t> mData;
};

#endif
