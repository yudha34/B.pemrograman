//Anggoro Yudha Pratama
//20200801322
#include <iostream> //preprocessor library input output stream.
#include <string>	//preprocessor library untuk tipe data string.

using namespace std;

int main() {
	string data[4][4];	    //deklarasi array 2 dimensi dengan tipe data string
	cout<<"=====Program Data mahasiswa=====\n\n";
	cout<<"Note = Baris 0 atau pertama di isi dengan header"<<endl;
	cout<<"       Baris 1 atau kedua di isi dengan isi tabel\n\n";
	for (int b = 0;b<4;b++){        //perulangan untuk input array bagian baris.
		for (int k = 0;k<4;k++){    //perulangan untuk input array bagian kolom.
			  cout<<"Baris "<<b<<" Kolom "<<k<<" = ";
			  cin>>data[b][k];      //input ke dalam array.
		}
		cout << endl;   //untuk membuat output baris baru
	}
	cout<<"\n";     //untuk membuat output enter.
	for (int b=0;b<4;b++){      //perulangan untuk menampilkan array bagian baris.
		for (int k=0;k<4;k++){      //perulangan untuk menampilkan array bagian kolom
			 cout<<"\t"<<data[b][k]<<"\t";  //menampilkan array.
		}
		cout << endl;   //untuk membuat output baris baru.
	}
}