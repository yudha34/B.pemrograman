// Anggoro Yudha Pratama
// 20200801322
#include <iostream>

using namespace std;

int fibbonaci(int m){
	if (m == 0 || m == 1){
		return m;
	}else{
		return (fibbonaci(m-1) + fibbonaci(m-2));
	}
}

int main(){
	int n,m = 0;
	
	cout<<"Masukan batas akhir dari bilangan fibonaci = ";cin>>n;
	cout<<"Nilai Deret Fibbonaci = ";
	
	for(int i = 1;i <=n;i++){
		cout<<fibbonaci(m)<<", ";
		m++;
	}
	
	return 0;
}