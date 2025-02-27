#include <iostream>
#include <string>

using namespace std;

class PetShop{
    private:
        string id;
        string nama_produk;
        int harga_produk;
        int stok_produk;
    public:
        PetShop(string id, string name){
            this->id = id;
            this->nama_produk = name;
            this->harga_produk = 0;
            this->stok_produk = 0;
        }

        // Method-method setter dan getter
        void setId(string id){
            this->id = id;
        }
        string getId(){
            return this->id;
        }

        void setNama(string nama){
            this->nama_produk = nama;
        }
        string getNama(){
            return this->nama_produk;
        }

        void setHarga(int harga){
            this->harga_produk = harga;
        }
        int getHarga(){
            return this->harga_produk;
        }

        void setStok(int stok){
            this->stok_produk = stok;
        }
        int getStok(){
            return this->stok_produk;
        }

        void display(){
            cout << "Id     : " << this->id << endl;
            cout << "Nama   : " << this->nama_produk << endl;
            cout << "Harga  : " << this->harga_produk << endl;
            cout << "Stok   : " << this->stok_produk << endl;
        }

        ~PetShop(){}
};