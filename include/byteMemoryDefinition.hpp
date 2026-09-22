// Ad Maiorem Dei Gloriam!
#ifndef BYTE_MEMORY_DEFINITION_HPP
#define BYTE_MEMORY_DEFINITION_HPP

#include <cstddef>
constexpr std::size_t KB(const int kilobytes) {
    return static_cast<std::size_t>(kilobytes) << 10;
}
constexpr std::size_t MB(const int megabytes) {
    return static_cast<std::size_t>(megabytes) << 20;
}
#endif
