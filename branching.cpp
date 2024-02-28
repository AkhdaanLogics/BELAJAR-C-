#include <iostream>
using namespace std;

int main()
{
  int j;
  cout << "Apakah anda mengantuk?\n";
  cout << "1.  Ya\n2.  Tidak\n";
  cout << "Masukkan pilihan [1-2] : ";
  cin >> j;
  if (j == 1)
  {
    cout << "Maka anda sebaiknya tidur...";
  }
  else if (j == 2)
  {
    cout << "Lanjutkan belajar c++";
  }
  else 
  {
    cout << "Pilihan anda tidak ada dalam menu!";
  }
}

/*
1.  if-else statement digunakan untuk program yang memiliki lebih dari 1 pilihan
2.  if dan else if digunakan apabila user menginputkan sesuai perintah dari program
3.  else digunakan apabila user salah menginputkan perintah
*/
