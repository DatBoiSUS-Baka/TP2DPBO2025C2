#include <iostream>
#include <string>

#include "Aksesoris.cpp"

class Baju : public Aksesoris{
    private:
        string untuk;
        string size;
        string merk;
    public:
        Baju(string id, string nama) : Aksesoris(id, nama){

        }

        void setUntuk(string untuk){
            this->untuk = untuk;
        }
        string getUntuk(){
            return this->untuk;
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