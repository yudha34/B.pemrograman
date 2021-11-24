//Anggoro Yudha Pratama
//20200801322

#include<iostream>

using namespace std;

int main(){
	
	int array[5];
	
	// menginputkan array secara manual
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	
	// menginputkan array dengan looping
	for (int i = 0;i<5;i++){ //perulangan i untuk input array dimana i < 5
		cout<<"Masukan Nilai = "; //untuk menerima inputan user
		cin>>array[i]; // menginputkan ke dalam array sesuai dengan kondisi i
	}

    cout<<"\n";
	
	// mengeluarkan array / uutput array secara manual
	cout<<"Nilai ke 0 = "<<array[0]<<endl;
	cout<<"Nilai ke 1 = "<<array[1]<<endl;
	cout<<"Nilai ke 2 = "<<array[2]<<endl;
	cout<<"Nilai ke 3 = "<<array[3]<<endl;
	cout<<"Nilai ke 4 = "<<array[4]<<endl;
	
	cout<<"\n";
	// mengeluarkan array / output array dengan looping
	for (int i = 0;i < 5;i++){	// perulangan i untuk mengakses nilai array dimana i < 5
		cout<<"Nilai ke "<<i<<" = "<<array[i]<<endl; //mengeluarkan nilai array sesuai dengan i
	}
}