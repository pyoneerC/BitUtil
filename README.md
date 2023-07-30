# Bitwise Conversions and Utilities Library (C++)

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Introduction

Welcome to the Bitwise Conversions and Utilities Library! This C++ library is my first open-source project, aiming to provide a set of powerful and easy-to-use functions for handling binary, octal, and hexadecimal representations. The library allows you to seamlessly convert between different number systems and perform various bitwise operations with confidence.

## Features

- **Integer Conversions:** Convert integers to binary, octal, and hexadecimal strings.
- **String to Integer Conversions:** Convert binary, octal, and hexadecimal strings back to integers.
- **Input Validation:** Handle and detect invalid representations with proper exception handling.
- **Straightforward API:** Simple and intuitive functions for easy integration.

## Installation

To use the library in your C++ project, follow these steps:

1. Download or clone the Bitwise Conversions and Utilities Library repository.
2. Copy the "BitUtil.h" header file to your project directory.
3. Link the library during compilation.

```cpp
#include "BitUtil.h"
```

## Getting Started

Let's dive into some basic examples to see how the library works.

### Convert Integer to Binary String

```cpp
#include <iostream>
#include "BitUtil.h"

int main() {
    int number = 42;
    std::string binaryStr = BitUtil::num_to_bitstr(number);
    std::cout << "Binary representation of " << number << ": " << binaryStr << std::endl;
    return 0;
}
```

### Convert Binary String to Integer

```cpp
#include <iostream>
#include "BitUtil.h"

int main() {
    std::string binaryStr = "101010";
    unsigned int number = BitUtil::bitstr_to_num(binaryStr);
    std::cout << "Integer representation of " << binaryStr << ": " << number << std::endl;
    return 0;
}
```

## Exception Handling

The library takes care of invalid inputs by throwing `std::invalid_argument` exceptions when non-binary characters are found in binary strings, non-octal characters in octal strings, or non-hexadecimal characters in hexadecimal strings. Exception handling ensures that you receive proper feedback when unexpected data is encountered.

## License

The Bitwise Conversions and Utilities Library is open-source and released under the [MIT License](https://opensource.org/licenses/MIT).

## Contributions

As my first open-source project, I welcome any contributions to make this library even better! If you find any issues or have suggestions for improvement, feel free to open an issue or submit a pull request.

## Acknowledgements

This project was inspired by my passion for programming and the desire to create something useful for the C++ community. Special thanks to all the developers and contributors who have shaped this project through feedback and ideas.
