// Ad Maiorem Dei Gloriam!
#ifndef TERMINAL_HPP
#define TERMINAL_HPP

#include "byteMemoryDefinition.hpp"
#include "canvas.hpp"
#include <string>

class Terminal {
  public:
    Terminal(const int initialMemoryAllocated = MB(1));
    ~Terminal();

    void clear();
    void displayCanvas(int x, int y, const Canvas &canvas);
    void flush();

  private:
    std::string mBuffer;
    int mCursorX = 1, mCursorY = 1;

    void setCursorPos(int x, int y);
};

#endif
