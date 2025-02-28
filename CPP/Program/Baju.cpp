#include <iostream>
#include <string>

#include "Aksesoris.cpp"

class Baju : public Aksesoris{
    private:
        string untukHewan;
        string size;
        string merk;
    public:
        Baju(string id, string nama, int harga, int stok) : Aksesoris(id, nama, harga, stok){
            this->untukHewan = "";
            this->size = "";
            this->merk = "";
        }

        void setUntukHewan(string untukHewan){
            this->untukHewan = untukHewan;
        }
        string getUntukHewan(){
            return this->untukHewan;
        }

        void setSize(string size){
            this->size = size;
        }
        string getSize(){
            return this->size;
        }

        void setMerk(string merk){
            this->merk = merk;
        }
        string getMerk(){
            return this->merk;
        }


        ~Baju(){}
};