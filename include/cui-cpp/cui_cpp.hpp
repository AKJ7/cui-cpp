#ifndef CUI_CPP
#define CUI_CPP

#if defined(__unix__) || defined(__unix) || defined(__linux__)
#define OS_LINUS
#elif defined(WIN32) || defined(_WIN32) || defined(_WIN64)
#define OS_WIN
#elif defined(__APPLE__) || defined(__MACH__)
#define OS_MAC
#else
#err UNKNOWN PLATFORM
#endif

#if defined(OS_LINUS) || defined(OS_MAC)
#include <unistd.h>
#elif defined(OS_WIN)
#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0600)
#error "Please set cui_cpp.hpp before any windows system headers or set _WIN32_WINNT at least to _WIN32_WINNT_VISTA"
#elif !defined(_WIN32_WINNT)
#define _WIN32_WINNT _WIN32_WINNT_VISTA
#endif

#include <window.h>
#include <io.h>
#include <memory>

#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif
#endif

#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <iostream>

namespace cui_cpp
{
    // https://en.wikipedia.org/wiki/ANSI_escape_code

    enum class color
    {
        BLACK = 30,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGNETA,
        CYAN,
        WHITE,

        BRIGHT_BLACK = 90,
        BRIGHT_RED,
        BRIGHT_GREEN,
        BRIGHT_YELLOW,
        BRIGHT_BLUE,
        BRIGHT_MAGNETA,
        BRIGHT_CYAN,
        BRIGHT_WHITE
    };

    enum class background
    {
        BLACK = 40,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGNETA,
        CYAN,
        WHITE,

        BRIGHT_BLACK = 100,
        BRIGHT_RED,
        BRIGHT_GREEN,
        BRIGHT_YELLOW,
        BRIGHT_BLUE,
        BRIGHT_MAGNETA,
        BRIGHT_CYAN,
        BRIGHT_WHITE
    };

    enum class decoration
    {
        RESET = 0,
        BOLD = 1,
        FAINT,
        ITALIC,
        UNDERLINE,
        SLOW_BLINK,
        RAPID_BLINK,
        REVERSE_VIDEO,
        CONCEAL,
        CROSSED_OUT,
        PRIMARY_FONT,
        ALTERNATIVE_FONT_1,
        ALTERNATIVE_FONT_2,
        ALTERNATIVE_FONT_3,
        ALTERNATIVE_FONT_4,
        ALTERNATIVE_FONT_5,
        ALTERNATIVE_FONT_6,
        ALTERNATIVE_FONT_7,
        ALTERNATIVE_FONT_8,
        ALTERNATIVE_FONT_9,
        FRAKTUR,
        DOUBLY_UNDERLINE,           // or bold_off
        NORMAL_COLOR,               // or density
        ITALIC_OFF,
        UNDERLINE_OFF,
        BLINK_OFF,
        INVERSE_OFF,
        REVEAL,
        CROSSED_OUT_OFF,
        SET_FOREGROUND_COLOR_1,
        SET_FOREGROUND_COLOR_2,
        SET_FOREGROUND_COLOR_3,
        SET_FOREGROUND_COLOR_4,
        SET_FOREGROUND_COLOR_5,
        SET_FOREGROUND_COLOR_6,
        SET_FOREGROUND_COLOR_7,
        SET_FOREGROUND_COLOR_8,
        SET_FOREGROUND_COLOR,            // Next arguments are 5;n or 2;r;g;b
        DEFAULT_FOREGROUND_COLOR,
        SET_BACKGROUND_COLOR_1,
        SET_BACKGROUND_COLOR_2,
        SET_BACKGROUND_COLOR_3,
        SET_BACKGROUND_COLOR_4,
        SET_BACKGROUND_COLOR_5,
        SET_BACKGROUND_COLOR_6,
        SET_BACKGROUND_COLOR_7,
        SET_BACKGROUND_COLOR_8,
        SET_BACKGROUND_COLOR,
        DEFAULT_BACKGROUND_COLOR,
        FRAMED,
        ENCIRCLED,
        OVERLINED,
        FRAMED_CIRCLED_OFF,
        OVERLINED_OFF,
        IDEOGRAM_UNDERLINE,              // or right side line
        IDEOGRAM_DOUBLE,                 // or double line on the right side
        IDEOGRAM_OVERLINE,              // or left side line
        IDEOGRAM_DOUBLE_OVERLINE,       // double line on left side
        IDEOGRAM_STRESS_MARKING,
        IDEOGRAM_ATTRIBUTES_OFF,        // reset effect of all 60-64
        SET_BRIGHT_FOREGROUND_COLOR_1,
        SET_BRIGHT_FOREGROUND_COLOR_2,
        SET_BRIGHT_FOREGROUND_COLOR_3,
        SET_BRIGHT_FOREGROUND_COLOR_4,
        SET_BRIGHT_FOREGROUND_COLOR_5,
        SET_BRIGHT_FOREGROUND_COLOR_6,
        SET_BRIGHT_FOREGROUND_COLOR_7,
        SET_BRIGHT_FOREGROUND_COLOR_8,
        SET_BRIGHT_BACKGROUND_COILOR_1,
        SET_BRIGHT_BACKGROUND_COILOR_2,
        SET_BRIGHT_BACKGROUND_COILOR_3,
        SET_BRIGHT_BACKGROUND_COILOR_4,
        SET_BRIGHT_BACKGROUND_COILOR_5,
        SET_BRIGHT_BACKGROUND_COILOR_6,
        SET_BRIGHT_BACKGROUND_COILOR_7,
        SET_BRIGHT_BACKGROUND_COILOR_8,
    };


    class CUI
    {



    };
}

#endif //CUI_CPP
