// string_fuzzer.cpp
#include <string>
#include "string_processor.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size > 0) {
        std::string input(reinterpret_cast<const char*>(data), size);
        processString(input.c_str());
    }
    return 0;
}
