// Anggoro Yudha Pratama 
// 20200801322
#include<iostream>

using namespace std;

int main(){
	int kodebj;
	string ukuran;
	
	cout<<"		=====Program Cek Baju=====\n";
	cout<<"		      Perusahaan XYZ\n\n";
	cout<<"Masukan Kode baju = ";cin>>kodebj;
	cout<<"Masukan Ukuran    = ";cin>>ukuran;
	cout<<"\n";
	
	if (kodebj == 1){
		cout<<"Merk baju   = IMP"<<endl;
		if (ukuran == "S" || ukuran == "s"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.200.000"<<endl;	
		}
		else if(ukuran == "M" || ukuran == "m"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.220.000"<<endl;
		}
		else{
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.250.000"<<endl;
		}
	}
	else if (kodebj == 2){
		cout<<"Merk baju   = Prada"<<endl;
		if (ukuran == "S" || ukuran == "s"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.150.000"<<endl;	
		}
		else if(ukuran == "M" || ukuran == "m"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.160.000"<<endl;
		}
		else{
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.170.000"<<endl;
		}
	}
	else if (kodebj == 3){
		cout<<"Merk baju   = Gucci"<<endl;
		if (ukuran == "S" || ukuran == "s"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.200.000"<<endl;	
		}
		else if(ukuran == "M" || ukuran == "m"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.200.000"<<endl;
		}
		else{
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.200.000"<<endl;
		}
	}
	else if (kodebj == 4){
		cout<<"Merk baju   = Louis Vuitton"<<endl;
		if (ukuran == "S" || ukuran == "s"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.300.000"<<endl;	
		}
		else if(ukuran == "M" || ukuran == "m"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.300.000"<<endl;
		}
		else{
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.350.000"<<endl;
		}
	}
	else if (kodebj == 5){
		cout<<"Merk baju   = Kick Denim"<<endl;
		if (ukuran == "S" || ukuran == "s"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.100.000"<<endl;	
		}
		else if(ukuran == "M" || ukuran == "m"){
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.120.000"<<endl;
		}
		else{
		cout<<"Ukuran Baju = "<<ukuran<<endl;
		cout<<"Harga Baju  = Rp.130.000"<<endl;
		}
	}
	else{
		cout<<"Mohon Masukan Kode yang tersedia (1 - 5)";
	}
}