#include "BitUtil.h"

/* TODO: Classes
 * TODO: Implement functions in the header file
 * TODO: Make functions more robust by enhancing the error handling
 * TODO: Extensive testing
 * TODO: Better file structure and organization by adding folders
 */

namespace BitUtil {

  std::string num_to_bitstr(int num) {
    if (num < 0) {
      std::cout << "Invalid number" << std::endl;
      return "0";
    }

    std::string result;
    do {
      result.insert(result.begin(), '0' + (num & 1));
      num >>= 1;
    } while (num != 0);

    return result;
  }

  unsigned int bitstr_to_num(const std::string& binary) {
    unsigned int result = 0;
    for (char bit : binary) {
      if (bit != '0' && bit != '1') {
        std::cout << "Invalid bit string" << std::endl;
        return 0;
      }
      result <<= 1;
      if (bit == '1') {
        result |= 1;
      }
    }
    return result;
  }

  std::string oct_to_bitstr(int oct) {
    if (oct < 0) {
      std::cout << "Invalid number. Expected a non-negative integer." << std::endl;
      throw std::invalid_argument("Invalid number. Expected a non-negative integer.");
    }

    if (oct == 0) {
      return "0";
    }

    std::string result;
    while (oct > 0) {
      int digit = oct % 8;
      result.insert(result.begin(), '0' + digit);
      oct /= 8;
    }

    return result;
  }

  int bitstr_to_oct(const std::string& binary) {
    if (binary.empty() || binary.find_first_not_of("01") != std::string::npos) {
      std::cout << "Invalid bit string" << std::endl;
      return 0;
    }

    int len = binary.length();
    int numGroups = (len + 2) / 3;
    int result = 0;

    for (int group = numGroups - 1; group >= 0; --group) {
      int groupValue = 0;
      int startPos = std::max(0, len - 3 * (group + 1));

      for (int i = startPos; i < len - 3 * group; ++i) {
        if (binary[i] != '0' && binary[i] != '1') {
          std::cout << "Invalid bit string" << std::endl;
          return 0;
        }
        groupValue = groupValue * 2 + (binary[i] - '0');
      }

      result = result * 10 + groupValue;
    }

    return result;
  }

} // namespace BitUtil