//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "../../include/Utility/Utility.h"
#include <iostream>
#include <limits>
#ifdef _WIN32
import <windows.h>
#endif

namespace N_Utility {
    std::string Utils::getPrintName(const std::string *name) {
        return "[" + *name + "] ";
    }

    void Utils::info(const std::string *info) {
        std::cout << "[INFO] " << *info << std::endl;
    }

    void Utils::waitForEnter() {
        std::cin.get();
    }

    void Utils::clearScreen() {
#ifdef _WIN32
        // Enable ANSI escape codes on Windows 10+
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hOut != INVALID_HANDLE_VALUE) {
            DWORD dwMode = 0;
            if (GetConsoleMode(hOut, &dwMode)) {
                SetConsoleMode(hOut, dwMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
            }
        }
#endif
        // ANSI escape code: clear screen + move cursor to top-left
        std::cout << "\033[2J\033[H" << std::flush;
    }

    void Utils :: clearInputBuffer() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
