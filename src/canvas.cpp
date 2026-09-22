// Ad Maiorem Dei Gloriam!
#include "canvas.hpp"
#include <algorithm>

Canvas::Canvas(int width, int height)
    : mWidth(width), mHeight(height), mData(width * height) {
    std::fill(mData.begin(), mData.end(), BLACK);
}

void Canvas::setCellColor(int x, int y, Color color) {
    x = std::clamp(x, 0, static_cast<int>(mWidth - 1));
    y = std::clamp(y, 0, static_cast<int>(mHeight - 1));
    mData[y * mWidth + x] = color;
}
Color Canvas::getCellColor(int x, int y) {
    x = std::clamp(x, 0, static_cast<int>(mWidth - 1));
    y = std::clamp(y, 0, static_cast<int>(mHeight - 1));
    return mData[y * mWidth + x];
}
