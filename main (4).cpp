#include <iostream>
using namespace std;
class data{
  public:
  void input();
  void proses();
  void output();
                   
private:
    int *nimMahasiswa;
    int nimMhs[5];
    string *namaMahasiswa;
    string namaMhs[5];
};
    

  void data::input(){
     cout<<"+----------------------------------------+"<<endl;
    cout << "\t\tData Mahasiswa Yang Masuk \n";
    cout << "\t   Babak Final Lomba Parmatika"<<endl;
    cout<<"------------------------------------------+"<<endl<<endl;
    for (int j=0; j<5; j++){
      cout << "Masukkan NIM  : ";
      cin >> nimMhs[j];
      cout << "Masukkan Nama : ";
      cin >> namaMhs[j];
      cout<<endl;
    }
  }
  void data::proses(){
    cout << "------------------------------\n";
    nimMahasiswa = new int[5];
    namaMahasiswa = new string[5];
    for(int j=0; j<5; j++){
      *nimMahasiswa = nimMhs[j];
      nimMahasiswa += 1;
      *namaMahasiswa = namaMhs[j];
      namaMahasiswa +=1;
    }
  }
  void data::output(){
    nimMahasiswa  -= 5;
    namaMahasiswa -= 5;
    cout<<"Menampilkan data mahasiswa "<<endl;
    for (int j=0; j<5; j++) {
      cout << "\nNama ke-" << j+1 << "\t\t : ";
      cout << *namaMahasiswa<<endl; 
      cout<< "Alamat Nama\t\t : "<<&namaMahasiswa;
      namaMahasiswa += 1;
      cout << "\nNim " << "\t\t\t : ";
      cout << *nimMahasiswa<<endl;
      cout<< "Alamat Nim\t\t : "<<&nimMahasiswa;
      cout << "\n------------------------------\n";
      nimMahasiswa += 1;
    }
  }


int main(){
  data x;
  x.input();
  x.proses();
  x.output();

  }