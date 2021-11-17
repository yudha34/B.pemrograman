// Anggoro Yudha Pratama 
// 20200801322

#include<iostream>	//preprocessor library iostream untuk input dan output
#include<string> //preprocessor library string untuk menggunakan tipe data string

using namespace std; //perintah untuk compiler bahwa kita akan menggunakan semua fungsi/class/file 
                    //yang terdapat dalam namespace std.

int main (){		//fungsi utama dalam c++ yang akan dijalankan dan dibaca compiler
	string a;		// deklarasi atau definisi variabel a bertipe data string untuk menampung inputan.
	cout<<"Masukan Kalimat yang ingin di tampilkan = "; //perintah untuk menampilkan dan memasukan inputan user
	cin>>a;		// memasukan inputan yang sebelumnya diterima kedalam variabel a.
	cout<<"\n";	// output untuk enter atau baris baru
	cout<<a;	//perintah output untuk menampilkan inputan user yang sudah di tampung kedalam variabel a.
}