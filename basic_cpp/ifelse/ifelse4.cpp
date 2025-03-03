#include <iostream>

int main (int argc, char *argv[]) {
  int x = 5;

  if (x == 5){
    std::cout << "ya ini 5" << std::endl;
  }else if(x == 3 ){
    std::cout << " ya ini 3" << std::endl;
  }else{
    std::cout << "bukan 5 atau 3" << std::endl;
  }
  return 0;
}
