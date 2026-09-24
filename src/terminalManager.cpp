// Ad Maiorem Dei Gloriam!
#include "terminalManager.hpp"

#ifdef _WIN32
// Windows -> Todo
#error "Windows is still not supported."
#else

void _setupTerminal(_terminalStruct &oldTerm, _terminalStruct &newTerm) {
    tcgetattr(STDIN_FILENO, &oldTerm);
    newTerm = oldTerm;

    newTerm.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newTerm);
}

void _restoreTerminal(_terminalStruct &oldTerm) {
    tcsetattr(STDIN_FILENO, TCSANOW, &oldTerm);
}

#endif

TerminalManager::TerminalManager(const std::size_t initialMemoryAllocated) {
    mBuffer.reserve(initialMemoryAllocated / sizeof(char));
}

void TerminalManager::setRawMode() {
    _setupTerminal(mOldTerminalMode, mNewTerminalMode);
}

void TerminalManager::restoreMode() { _restoreTerminal(mOldTerminalMode); }
