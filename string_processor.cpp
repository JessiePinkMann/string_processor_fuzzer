// string_processor.cpp
#include <iostream>
#include <cstring>

void processString(const char* input) {
    char buffer[10];
    
    if (strlen(input) < 10) {
        strcpy(buffer, input); // Возможная уязвимость к переполнению буфера
        std::cout << "Input processed: " << buffer << std::endl;
    } else {
        std::cout << "Input too long!" << std::endl;
    }
}
