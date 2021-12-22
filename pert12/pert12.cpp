//Anggoro Yudha Pratama
//20200801322

#include<iostream>

using namespace std;

int kuadrat(){ //contoh deklarasi fungsi sebelum fungsi main tanpa parameter
	int a;
	cout<<"masukan angka yang akan dikuadratkan = ";cin>>a;
	a = a * a;
    return a;
}

int main(){
	int hasil;
	cout<<"===== Program kuadrat ====="<<endl;
    hasil = kuadrat();  // memanggil fungsi kuadrat untuk mengakses fungsinya 
	cout<<"Hasilnya = "<<hasil; 							
}