#include <iostream>
using namespace std;

class Output{
  public:
        void output();
  private:
      int i,n,k,l;
      int brs,klm;
      string data[100];
      string data2[100][100]; 
};

void Output::output(){
    cout<<"---------------------------------------------------------------------------------------\n";
    cout<<"|\t\t\tKelas\t\t\t| |\t\t\tNIM\t\t\t| |\t\t\tNama\t\t\t| \n";
    cout<<"---------------------------------------------------------------------------------------\n";
    for (int k=0;k<brs;k++){
      for (int l=0;l<3;l++){  
        cout<<"|"<<data2[k][l]<<"|";
      }
      cout<<endl;
    }
    cout<<endl<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<endl;
}