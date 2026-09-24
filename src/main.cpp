// Ad Maiorem Dei Gloriam!
#include "terminalManager.hpp"
#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Hello, world!\n";
    TerminalManager tm;
    tm.setRawMode();
    std::cin.get();
    tm.restoreMode();
    return 0;
}
