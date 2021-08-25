#include <iostream>

/*
NAMA    : Rizki Ramadhani
JUDUL   : Pengenalan int, double, char, string, cout
Bahasa  : C++
*/

using namespace std;
int main()
{
  int hasil;
  double ipk;
  char kelas;
  string kegiatan;

  hasil = 10;
  ipk = 3.27;
  kelas = 'A';
  kegiatan = "MSC FMIPA";

  cout <<"=========================================================== \n";
  cout <<"========= Program Menampilkan Data Mahasiswa ============== \n";
  cout <<"=========================================================== \n";

  cout << hasil;
  cout << "\n";
  cout << ipk;
  cout << "\n";
  cout << kelas;
  cout << "\n";
  cout << kegiatan;

  return 0;
}
