#include <iostream>
#include <string>
#include "PetShop.cpp"

using namespace std;

class Aksesoris : public PetShop{
    private:
        string jenis;
        string bahan;
        string warna;
    public:
        Aksesoris(string id, string name) : PetShop(id, name){
        }

        // Method-method untuk set dan get
        void setJenis(string jenis){
            this->jenis = jenis;
        }
        string getJenis(){
            return this->jenis;
        }

        void setBahan(string bahan){
            this->bahan = bahan;
        }
        string getBahan(){
            return this->bahan;
        }

        void setWarna(string warna){
            this->warna = warna;
        }
        string getWarna(){
            return this->warna;
        }

        ~Aksesoris(){}

};