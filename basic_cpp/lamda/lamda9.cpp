#include <iostream>
int main (int argc, char *argv[]) {
  //belajar lamda
  int a = 5;
  int b = 3;

  auto angka = [a,b] (){
    return a*b;
  };

  std::cout << "result: " << angka() << std::endl;
  return 0;
}
