// string_processor.cpp
#include "string_processor.h"
#include <iostream>
#include <cstring>

void processString(const char* input) {
    std::cout << "Received input: " << input << std::endl;

    char buffer[10];

    if (strlen(input) <= 10) {
        strcpy(buffer, input);
        std::cout << "Input processed: " << buffer << std::endl;
    } else {
        std::cout << "Input too long!" << std::endl;
    }
}
