// WARNING: this file must be saved as UTF-16 for the unicode characters

// This is an optional file to aid printing. You can define your own interface
// to interface with functions from /inc/sudoku.hpp.

#pragma once

#include "shared_inc.hpp"

#include <iostream>
#include <string>

namespace draw::narrow
{
    static const std::string alpha  { "    a b c   d e f   g h i\n"   };
    static const std::string middle { "  +-------+-------+-------+\n" };

    // returns string of row in format:
    // "r | x x x | x x x | x x x | r\n"
    // where r is row index, and x is number values
    static std::string row(const uint8_t index, const std::array<uint8_t, 9>& numbers);
};

std::ostream& operator<<(std::ostream& out, const grid& board);

namespace draw::wide
{
    static const std::wstring alpha  { L"    a b c   d e f   g h i\n"   };
    static const std::wstring top    { L"  ┌───────┬───────┬───────┐\n" };
    static const std::wstring middle { L"  ├───────┼───────┼───────┤\n" };
    static const std::wstring bottom { L"  └───────┴───────┴───────┘\n" };

    // returns string of row in format:
    // L"r | x x x | x x x | x x x | r\n"
    // where r is row index, and x is number values
    static std::wstring row(const uint8_t index, const std::array<uint8_t, 9>& numbers);
};

std::wostream& operator<<(std::wostream& out, const grid& board);
