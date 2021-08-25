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

  cout << "HASIL     = " << hasil;
  cout << "\n";
  cout << "IPK       = " << ipk;
  cout << "\n";
  cout << "KELAS     = " << kelas;
  cout << "\n";
  cout << "KEGIATAN  = " << kegiatan;

  return 0;
}
