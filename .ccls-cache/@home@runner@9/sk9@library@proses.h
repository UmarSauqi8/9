#include <iostream>
using namespace std;

class Proses{
  public:
        void proses();
  private:
      int i,n,k,l;
      int brs,klm;
      string data[100];
      string data2[100][100]; 
};

void Proses::proses(){
    for (int k=0;k<brs;k++){ 
        for (int l=0;l<3;l++){
            data2[k][l]=data[i];
            i++;
        }
    }
}
