// WARNING: this file must be saved as UTF-16 for the unicode characters

// This is an optional file to aid printing. You can define your own interface
// to interface with functions from /inc/sudoku.hpp.

#pragma once

#include "shared_defs.hpp"

#include <iostream>
#include <string>

namespace sudoku
{
    // Formatting for a sudoku grid with box-drawing characters.
    // Returns wide string due to unicode characters.
    const std::wstring format(const sudoku::grid& board);

    // Formatting for a sudoku grid with box-drawing characters.
    // Returns wide string due to unicode characters.
    // Player input is coloured, clues remain uncoloured.
    const std::wstring format(const sudoku::grid& player, const sudoku::grid& question);
};
