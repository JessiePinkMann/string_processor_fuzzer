// string_fuzzer.cpp
#include <string>
#include "string_processor.cpp"

// Функция, которая будет использоваться для фаззинга
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size > 0) {
        // Конвертируем данные в строку
        std::string input(reinterpret_cast<const char*>(data), size);
        processString(input.c_str());
    }
    return 0;
}
