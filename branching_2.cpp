#include <iostream>
using namespace std;

int main()
{
  int j;
  cout << "Apakah anda siap belajar c++ lagi?\n";
  cout << "1.  Ya\n2.  Tidak\n";
  cout << "Masukkan pilihan [1-2] : ";
  cin >> j;
  switch (j)
    {
      case 1:
      cout << "Semangat!";

      case 2:
      cout << "Tidur aja lagi!";

      default:
      cout << "Pilihanmu tidak ada dalam menu!";

      break;
    }
}

/*
1.  switch case juga termasuk ke dalam percabangan, penggunaannya terlihat lebih mudah namun juga tergantung
    pada program yang akan anda buat
2.  default pada switch case sama dengan else dalam if-else
*/
