#include <iostream>
#include <string>

// definisi class Mobil
class Mobil {
  private:
    std::string merek;
    std::string model;
    int tahun;

  public:
    // constructor
    Mobil(std::string m, std::string md, int th) {
      merek = m;
      model = md;
      tahun = th;
    }

    // method
    void cetakInfo() {
      std::cout << "Merek: " << merek << std::endl;
      std::cout << "Model: " << model << std::endl;
      std::cout << "Tahun: " << tahun << std::endl;
    }
};

int main() {
  // membuat object mobil1
  Mobil mobil1("Toyota", "Avanza", 2010);

  // memanggil method cetakInfo dari mobil1
  mobil1.cetakInfo();

  return 0;
}
