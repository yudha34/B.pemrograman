//Anggoro Yudha Pratama
//20200801322

#include<iostream>

using namespace std;

#include <iostream>

using namespace std; 

// class induk
class BangunDatar { 
    protected: 
    int lebar, tinggi; 
    
    public: 
    void setValue(int a, int b){
        lebar   = a;
        tinggi  = b;
    } 
};

// class turunan
class Persegi: public BangunDatar { 
    public: 
    int getValue(){
        return (lebar * tinggi); 
    } 
}; 

// class turunan
class Segitiga: public BangunDatar { 
    public: 
    int getValue(){ 
        return (lebar * tinggi / 2); 
    } 
};
 
// program utama
int main () { 

    // Inisiasi Object
    Persegi persegi; 
    Segitiga segitiga; 
    
    // Inisiasi Nilai
    persegi.setValue(4,5); 
    segitiga.setValue(4,5); 
    
    // Mendapatkan Nilai Kembalian
    cout << persegi.getValue() << endl; 
    cout << segitiga.getValue() << endl; 
    return 0; 
}