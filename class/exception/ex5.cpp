#include <iostream>

int main(int argc, char *argv[]) {
  // belajar excption
  int a, b, result;
  std::cout << "masukan angka pertama: ";
  std::cin >> a;
  std::cout << "masukan angka kedua: ";
  std::cin >> b;
  try {
    if (b == 0) {
      throw "angka kedua tidak boleh dibagi dengan 0";
    }
    result = a / b;
    std::cout << "hasil: " << result << std::endl;
  } catch (const char *message) {
    std::cout << "message: " << message << std::endl;
  }
  return 0;
}
