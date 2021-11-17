// Anggoro Yudha Pratama 
// 20200801322
#include <iostream>

using namespace std;

int main(){
      int  i, j, n;
      cout << "Masukkan jumlah baris:  ";
      cin >> n;
      for (i = n; i >= 1; i--){
      	cout<<" ";
            for (j = 1; j <= i; j++){
            	
                cout<< "* ";
            }
        cout << "\n";
      }
      return 0;
}