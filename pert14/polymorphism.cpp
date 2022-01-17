//20200801322
//Anggoro Yudha Pratama

#include <iostream>
using namespace std;
 
class kelasinduk {
    public:
        void perkenalan(){ //Overridden Function
            cout<<"Hallo saya Function dari kelas induk"<<endl; 
   }
};

class kelasanak1: public kelasinduk{    //polymorphism
    public:
        void perkenalan() { //Overriding Function
            cout<<"Hallo saya Function dari kelas anak 1"<<endl;
   }
};

class kelasanak2 : public kelasinduk{   //polymorphism
    public:
        void perkenalan(){  //Overriding Function
            cout<<"Halo saya function dari kelas anak 2"<<endl;
    }
};

int main() {
   kelasinduk induk;
   kelasanak1 anak1;
   kelasanak2 anak2;
   
   induk.perkenalan();
   anak1.perkenalan();
   anak2.perkenalan();
   return 0;
}