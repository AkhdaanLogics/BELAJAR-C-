#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Berapa banyak kamu ingin mengulang?\n";
  cout << "Masukkan angka : ";
  cin >> a;
  for (int i = 1; i <= a; i++)
    {
      cout << "Ini merupakan perulangan ke - " << a ;
    }
}

/*
1.  int a, int atau integer merupakan suatu tipe data, terdapat banyak tipe data di c++
    seperti int untuk bilangan bulat, char untuk bilangan desimal, float untuk bilangan desimal, 
    string untuk huruf dan angka yang memiliki banyak kalimat
2.  cin kepanjangan dari c input, yang mana arti dari cin >> a adalah angka yang anda masukkan pada
    perintah diatas akan disimpan ke dalam variabel a
3.  for (int ... dst) merupakan perintah dasar untuk melakukan looping atau perulangan, yang apabila dibunyikan
    menjadi untuk (integer i = 0; apabila i <= a; maka i++)
*/
