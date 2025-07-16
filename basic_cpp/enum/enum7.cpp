#include <iostream>

int main(int argc, char *argv[]) {

  enum Warna { merah, kuning, hijau };
  Warna red = Warna::merah;
  std::cout << red << std::endl;
  return 0;
}
