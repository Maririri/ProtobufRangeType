#include <iostream>
#include "repeated_field.h"

int main() {

    ::google::protobuf::RepeatedPtrField<::std::string> rep;
    for (auto f : rep) { // Clion: Error  not a valid range type
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

