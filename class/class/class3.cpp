#include <string>
#include <iostream>

class Mahasiswa{
  public:
std::string name;
std::string alamat;

  Mahasiswa(std::string nm,std::string al){
    this->name = nm;
    this->alamat = al;
  }

  void display(){
    std::cout << "my name: " << name << std::endl;
    std::cout << "alamat: " << alamat << std::endl;
  }
};
int main (int argc, char *argv[]) {

  Mahasiswa otong = Mahasiswa("otong","kp ciantra");
  otong.display();
  
  return 0;
}
