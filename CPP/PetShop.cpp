#include <iostream>
#include <string>

using namespace std;

class PetShop{
    private:
        string id;
        string nama_produk;
        string harga_produk;
        string stok_produk;
    public:
        PetShop(string id, string nama_produk, string harga_produk, string stok_produk){
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
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

        void setHarga(string harga){
            this->harga_produk = harga;
        }
        string getHarga(){
            return this->harga_produk;
        }

        ~PetShop(){}
};