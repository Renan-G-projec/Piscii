// Ad Maiorem Dei Gloriam!
#ifndef TERMINAL_MANAGER_HPP
#define TERMINAL_MANAGER_HPP

#include "byteMemoryDefinition.hpp"
#include "canvas.hpp"
#include <string>

#ifdef _WIN32

#error "Windows is still not supported. "

#else

#include <termios.h>
#include <unistd.h>

#define _terminalStruct termios

#endif

class TerminalManager {
  public:
    TerminalManager(const std::size_t initialMemoryAllocated = KB(10));

    void setRawMode();
    void restoreMode();

    void clear();
    void displayCanvas(int x, int y, const Canvas &canvas);
    void flush();

  private:
    std::string mBuffer;
    int mCursorX = 1, mCursorY = 1;

    void setCursorPos(int x, int y);
    _terminalStruct mNewTerminalMode, mOldTerminalMode;
};

#endif
