// Ad Maiorem Dei Gloriam!
#ifndef COLOR_HPP
#define COLOR_HPP

#include <cstdint>
struct Color {
    std::uint8_t r, g, b;
};

constexpr Color WHITE{255, 255, 255};
constexpr Color BLACK{0, 0, 0};
constexpr Color RED{255, 0, 0};
constexpr Color GREEN{0, 255, 0};
constexpr Color BLUE{0, 0, 255};
constexpr Color YELLOW{255, 255, 0};
constexpr Color CYAN{0, 255, 255};
constexpr Color PURPLE{255, 0, 0};

#endif
