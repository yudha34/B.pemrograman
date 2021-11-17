// Anggoro Yudha Pratama 
// 20200801322
#include <iostream>

using namespace std;

int main (){
	int n;
	cout<<"Masukan jumlah baris = ";cin>>n;
	for(int i = 1;i <= n;i++){
		for (int j = 1;j<=i;j++){
			cout<<" ";
		}
		for (int k = n;k >=i;k--){
			cout<<"*";
		}
		cout<<endl;
	}
}