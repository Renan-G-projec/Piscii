// Ad Maiorem Dei Gloriam!
#include "canvas.hpp"
#include <algorithm>

Canvas::Canvas(unsigned int width, unsigned int height)
    : mWidth(width), mHeight(height), mData(width * height) {}

void Canvas::setCellColor(int x, int y, Color color) {
    x = std::clamp(x, 0, static_cast<int>(mWidth));
    y = std::clamp(y, 0, static_cast<int>(mHeight));
    mData[y * mWidth + x] = color;
}
Color Canvas::getCellColor(int x, int y) {
    x = std::clamp(x, 0, static_cast<int>(mWidth));
    y = std::clamp(y, 0, static_cast<int>(mHeight));
    return mData[y * mWidth + x];
}
