#include <iostream>
using namespace std;

class Input{
  public:
        void input();
  private:
      int i,n,k,l;
      int brs,klm;
      string data[100];
      string data2[100][100]; 
};

void Input::input(){
 cout<<"masukan banyak data : ";
  cin>>n; 
  for (int i=0; i<n; i++){
  cout<<"Data ke-"<<i+1<<" : ";
  cin>>data[i];
  }
  for (int j=0; j<n;j++){
  cout<<"\n"<<data[j]<<" ";
  }
   cout<<"\n==================================="<<endl;
   cout<<"masukan banyaknya baris ";
   cin>>brs;
   cout<<"\n==================================="<<endl;
}