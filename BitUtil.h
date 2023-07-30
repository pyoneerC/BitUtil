#ifndef BITSLIBRARY_LIBRARY_H
#define BITSLIBRARY_LIBRARY_H
#endif //BITSLIBRARY_LIBRARY_H
#include <string>
#include <iostream>
#include <stdexcept>
#pragma once

namespace BitUtil {

  // TODO: Enhance the existing implementation of the following functions
  std::string num_to_bitstr(int num);
  unsigned int bitstr_to_num(const std::string& binary);
  std::string oct_to_bitstr(int oct);
  int bitstr_to_oct(const std::string& binary);

  // TODO: Implement the following functions
  auto oct_to_binary(int oct);
  auto binary_to_oct(std::string binary);
  auto concatenate_bit_sequences(const std::string& binary1, const std::string& binary2);
  auto addtobinary(std::string binary1, std::string binary2);
  auto subtractfrombinary(std::string binary1, std::string binary2);
  auto multiplybinary(std::string binary1, std::string binary2);
  auto dividebinary(std::string binary1, std::string binary2);
}
