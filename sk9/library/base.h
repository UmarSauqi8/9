#include <iostream>
#include <string.h>
using namespace std;

class Base {
public:
  void input();
  void proses();
  void output();

private:
  int i, n, k, l;
  int brs, klm;
  string data[100];
  string data2[100][100];
};

void Base::input() {
  cout << "masukan banyak data : ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Data ke-" << i + 1 << " : ";
    cin >> data[i];
  }
  for (int j = 0; j < n; j++) {
    cout << "\n" << data[j] << " ";
  }
  cout << "\n===================================" << endl;
  cout << "masukan banyaknya baris ";
  cin >> brs;
  cout << "\n===================================" << endl;
}

void Base::proses() {
  for (int k = 0; k < brs; k++) {
    for (int l = 0; l < 3; l++) {
      data2[k][l] = data[i];
      i++;
    }
  }
}

void Base::output() {
  cout << "--------------------------------------------------------------------"
          "--------------\n";
  cout
      << "|\t\tDepartemen\t\t| |\t\t\tId Karyawan\t\t\t| |\t\t\tNama\t\t\t| \n";
  cout << "--------------------------------------------------------------------"
          "--------------\n";
  for (int k = 0; k < brs; k++) {
    for (int l = 0; l < 3; l++) {
      cout << "|\t\t\t " << data2[k][l] << "\t\t\t| ";
    }
    cout << endl;
  }
  cout << endl
    << "-------------------------------------------------------------------------------------"
       << endl;
}