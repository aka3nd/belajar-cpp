#include <iostream>

int main (int argc, char *argv[]) {
  enum Warna {merah,kuning,hijau};
  Warna Red = Warna::merah;
  Warna Yellow = Warna::kuning;
  Warna Green = Warna::hijau;

  std::cout << Red << std::endl;
  std::cout << Yellow << std::endl;
  std::cout << Green << std::endl;
  return 0;
}
