//Anggoro Yudha Pratama 
//20200801322

#include<iostream>

using namespace std;

void pangkat (int *ptr,int *n){ //mendefinisikan fungsi pangkat dengan pointer.
	int total = 1;		//mendefinisi variabel total = 1.
	cout<<"Address dari ptr            = "<<ptr<<endl; //menampilkan alamat ptr.
	cout<<"Nilai dari ptr              = "<<*ptr<<endl; //menampilkan nilai ptr.
	cout<<"\n";
	cout<<"Address dari n              = "<<n<<endl; //menampilkan alamat n.
	cout<<"Nilai dari n                = "<<*n<<endl; //menampilkan nilai n.
	
	for(int i = 1;i <= *n;i++){ //perulangan i dengan kondisi i<= nilai n.
	 total = total * *ptr; //mengalikan total dengan nilai ptr.
	}
	cout<<"========================================"<<endl;
	cout<<"Hasil Pemangkatan           = "<<total; // menampilkan hasil pemangkatan
	
}
	


int main (){
	int angka,p; //mendefinisikan variabel angka dan p.
	
	cout<<"===== Program Menghitung Pangkat dengan pointer =====\n\n";
	cout<<"Masukan nilai angka         = ";cin>>angka; //memasukan inputan user ke angka
	cout<<"Masukan Nilai Pangkat       = ";cin>>p;  //memasukan inputan user ke p
	cout<<"========================================"<<endl;
	
	cout<<"Address dari variabel angka = "<<&angka<<endl; //menampilkan alamat angka.
	cout<<"Nilai dari variabel angka   = "<<angka<<endl; //menampilkan nilai angka.
	cout<<"\n";
	
	cout<<"Address dari variabel p     = "<<&p<<endl; //menampilkan alamat p.
	cout<<"Nilai dari variabel p       = "<<p<<endl; //menampilkan nilai p.
	
	cout<<"\n";
	pangkat(&angka,&p); // memanggil fungsi pangkat dengan pointer dan passing
						// alamat dari variabel angka dan p.
	
	
	
}