#include <iostream>
class Angka {
public:
  int *angka;

  Angka(int value) {
    angka = new int(value);
    std::cout << "konstructor di panggil" << "dengan value: " << value
              << std::endl;
  }

  ~Angka() {
    delete angka;
    std::cout << "constructor di hapus" << std::endl;
  }
};

int main(int argc, char *argv[]) {
  Angka nomor(23);

  return 0;
}
