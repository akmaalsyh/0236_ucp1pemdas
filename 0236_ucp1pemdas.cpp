#include <iostream>
using namespace std;

int sensor1, sensor2, sensor3;

int main ()
{
    cout << "Masukkan suhu1 :";
    cin >> sensor1;
    cout << "Masukkan suhu2 : ";
    cin >> sensor2;
    cout << "Masukkan suhu3 : ";
    cin >> sensor3;

    if (sensor1 + sensor2 + sensor3 <= 75);
    cout << "Suhu kota tidak sehat" << endl;

    string pilihan;
    do {
        if (sensor1 + sensor2 + sensor3 <= 7)

        cout << "apakah anda ingin menghitung suhu kota lagi? (Yes/no)";
        cin >> pilihan;

    } while (pilihan == "No");
}


// 1. int int bilangan1, bilangan2; float pembagian(float a, float b), struct DetailAlamat
//{
  //  string desa;
    //string kota;
// };
//
// 2. Prosedur
// Definisi prosedur "sapa"
// void sapa() {
//    cout << "Halo! Selamat datang di program ini." << std::endl;
// }
// int main() {
    // Memanggil prosedur "sapa"
//    sapa();

//    return 0;
// }

//      fungsi 
// void input ()
//{
 //   cin >> nAdidas;
//
  //  cout << "Masukkan jumlah puma = ";
    //cin >> nPuma;
//
  //  cout << "Masukkan jumlah New Balance = ";
    //cin >> nNB;
//
  //  cout << "Masukkan jumlah Compass = ";
    //cin >> nCompass;
//
  //  cout << "Masukkan jumlah Nike = ";
    //cin >> nNike;
//}
// 
// 3. looping
// int main()
//{
    //int i;
//
  //  string nama(5); 
//
  //  for(i = 0; i < 7; i++);(
    //    cout << i << "." << "AKMAL" << endl;
    //)
//
  //  for(i=0; i < 5; i++);(
    //    cout <<"Masukkan nama =";
      //  cin >> nama(i);
    //)
//
  //  COUT << endl;
    //cout << "--------------------" << endl;
    //cout << "KUMPULAN NAMA-NAMA" << endl;
//
  //  for(i=0; i<5; i++);(
    //    cout << "Namanya adalah" << nama(i) << endl;
    //)
//}
//
// 4. condisional
// int main()
// {
//    int bilangan1;
//    int bilangan2;
//    string status;
 //   srand(time(0));
 //   bilangan1 = rand() % 10;
   // bilangan2 = rand() % 10;
    //if (bilangan1 ==bilangan2)
    //{
    //    status = "Bilangan 1 sama dengan bilangan 2";
    //}
    //else if (bilangan1 > bilangan2)
    //{
    //    status = "bilangan 1 lebih besar dari bilangan 2";
    //}
    //else
    //{
    //    status = "Bilangan 1 lebih kecildari bilangan 2";
    //}
//
    //cout << "Bilangan pertama = " << bilangan1 <<endl;
    //cout << "Bilangan kedua = " << bilangan2 <<endl;
    //cout << "statusnya = " << status <<endl;
//}
// 5. struct 
//  struct mahasiswa {
//      string nim;
//      string nama;
//      DetailAlamat alamat;
//      int umur; };