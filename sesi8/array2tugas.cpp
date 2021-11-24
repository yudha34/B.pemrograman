//Anggoro Yudha Pratama
//20200801322

#include<iostream>

using namespace std;

int main(){
	
	int array[3][3];
	
	//menginputkan array dua dimensi dengan cara manual
	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;
	
	array[1][0] = 4;
	array[1][1] = 5;
	array[1][2] = 6;
	
	array[2][0] = 7;
	array[2][1] = 8;
	array[2][2] = 9;
	
	//menginputkan array dua dimensi dengan looping.
	for (int b=0;b<3;b++){ // perulangan b untuk mengakses nilai baris.
		for (int k=0;k<3;k++){ // perulangan k untuk mengakses nilai kolom
			  cout<<"array["<<b<<"]["<<k<<"] = "; // menerima inputan soal
			  cin>>array[b][k]; // menginputkan ke dalam array sesuai kondisi b dan k
		}
		cout << endl; //membuat baris baru setelah looping kolom
	}

    //mengeluarkan / output array dua dimensi dengan cara manual 
	cout<<array[0][0]<<" ";
	cout<<array[0][1]<<" ";
	cout<<array[0][2]<<endl;
	
	cout<<array[1][0]<<" ";
	cout<<array[1][1]<<" ";
	cout<<array[1][2]<<endl;
	
	cout<<array[2][0]<<" ";
	cout<<array[2][1]<<" ";
	cout<<array[2][2]<<endl;
	
	cout<<"\n";
	// mengeluarkan / output array dua dimensi dengan looping
	for (int b=0;b<3;b++){ // perulangan b untuk mengakses array indeks baris
		for (int k=0;k<3;k++){ // perulangan k untuk mengakses array indeks kolom
			 cout<<array[b][k]<<" "; //mengeluarkan array sesuai kondisi b dan k
		}
		cout << endl; // membuat baris baru setelah looping k
	}
}