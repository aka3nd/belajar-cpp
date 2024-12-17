#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {

  std::ofstream file("asu.txt");

  if (!file) {
    std::cout << "error bro" << std::endl;
  }
  file << "ini file 1\n";
  file << "ini file ke \n";

  file.close();

  return 0;
}
