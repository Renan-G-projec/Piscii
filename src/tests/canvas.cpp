// Ad Maiorem Dei Gloriam!
#include "canvas.hpp"
#include <cassert>
#include <iostream>

bool isColorEqual(const Color &a, const Color &b) {
    return a.r == b.r && a.g == b.g && a.b == b.b;
}

void testCanvas() {
    std::cout << "[TESTS] - Initializing canvas test...\n";
    Canvas canvas(12, 13);
    assert(canvas.getWidth() == 12);
    assert(canvas.getHeight() == 13);

    canvas.setCellColor(2, 3, {255, 255, 255});
    canvas.setCellColor(-1, 0, {255, 255, 255});
    canvas.setCellColor(12, 13, {255, 255, 255});
    canvas.setCellColor(100, 1200, {255, 255, 255});

    assert(isColorEqual(canvas.getCellColor(2, 3), {255, 255, 255}));
    assert(isColorEqual(canvas.getCellColor(0, 0), {255, 255, 255}));
    assert(isColorEqual(canvas.getCellColor(1823, 1234), {255, 255, 255}));
    std::cout << "[TESTS] - Canvas test finished without errors!\n";
}
