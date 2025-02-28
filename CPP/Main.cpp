#include <string>
#include <iostream>
#include <vector>

using namespace std;

#include "Baju.cpp"

int main(){

    vector<Baju> listBarang;
    // objek-objek awal
    listBarang.push_back(Baju("001", "Collar", 20000, 15));
    listBarang.back().setJenis("Kalung");
    listBarang.back().setBahan("Leather");
    listBarang.back().setWarna("Coklat");
    listBarang.back().setUntukHewan("Kucing/Anjing");
    listBarang.back().setSize("M");
    listBarang.back().setMerk("Gucci");

    listBarang.push_back(Baju("002", "BajuKucing", 15000, 10));
    listBarang.back().setJenis("BajuHewan");
    listBarang.back().setBahan("Katun");
    listBarang.back().setWarna("Merah");
    listBarang.back().setUntukHewan("Kucing");
    listBarang.back().setSize("M");
    listBarang.back().setMerk("Gucci");
    
    listBarang.push_back(Baju("003", "PasirKucing", 30000, 30));
    listBarang.back().setJenis("Pasir");
    listBarang.back().setBahan("Pasir");
    listBarang.back().setWarna("Abu");
    listBarang.back().setUntukHewan("Any");
    listBarang.back().setSize("L");
    listBarang.back().setMerk("LifeCat");
    
    listBarang.push_back(Baju("004", "MakananKucing", 12500, 20));
    listBarang.back().setJenis("Makanan");
    listBarang.back().setBahan("Tuna");
    listBarang.back().setWarna("Coklat");
    listBarang.back().setUntukHewan("Kucing");
    listBarang.back().setSize("M");
    listBarang.back().setMerk("Whiskas");

    listBarang.push_back(Baju("005", "MainanAnjing", 10000, 15));
    listBarang.back().setJenis("Mainan");
    listBarang.back().setBahan("Plastik");
    listBarang.back().setWarna("Hijau");
    listBarang.back().setUntukHewan("Anjing");
    listBarang.back().setSize("S");
    listBarang.back().setMerk("LifeCat");

    // Input
    int n = 0; cout << "Ingin input berapa kali?" << endl; cin >> n;
    string id, nama, jenis, bahan, warna, untuk, size, merk;
    int harga, stok;
    for (int i = 0; i < n; i++)
    {
        cout << "Silahkan input" << endl;
        cin  >> id >> nama >> harga >> stok >> jenis >> bahan >> warna >> untuk >> size >> merk;
        Baju hold(id, nama, harga, stok);
        hold.setJenis(jenis);
        hold.setBahan(bahan);
        hold.setWarna(warna);
        hold.setUntukHewan(untuk);
        hold.setSize(size);
        hold.setMerk(merk);

        listBarang.push_back(hold);
    }

    // Menghitung spasi dalam table
    vector<int> longestLength = {3, 11, 5, 4, 5, 5, 5, 11, 4, 4};
    for (auto it = listBarang.begin(); it != listBarang.end(); it++)
    {
        if(longestLength[0] < it->getId().length()) longestLength[0] = it->getId().length();

        if(longestLength[1] < it->getNama().length()) longestLength[1] = it->getNama().length();

        string temp = to_string((it->getHarga()));
        if(longestLength[2] < temp.length()) longestLength[2] = temp.length();

        temp = to_string(it->getStok());
        if(longestLength[3] < temp.length()) longestLength[3] = temp.length();

        if(longestLength[4] < it->getJenis().length()) longestLength[4] = it->getJenis().length();
        
        if(longestLength[5] < it->getBahan().length()) longestLength[5] = it->getBahan().length();

        if(longestLength[6] < it->getWarna().length()) longestLength[6] = it->getWarna().length();
        
        if(longestLength[7] < it->getUntukHewan().length()) longestLength[7] = it->getUntukHewan().length();

        if(longestLength[8] < it->getSize().length()) longestLength[8] = it->getSize().length();

        if(longestLength[9] < it->getMerk().length()) longestLength[9] = it->getMerk().length();
    }
    
    // Menghitung panjang table
    int panjangTabel = 0;
    for (int i = 0; i < longestLength.size(); i++)
    {
        panjangTabel += longestLength[i] + 3;
    }
    
    for (int i = 0; i < panjangTabel; i++)
    {
        cout << "=";
    }
    
    cout << endl;

    // Header Table
    cout << "|ID ";
    for (int space = 0; space < longestLength[0] - 3; space++)
    {
        cout << " ";
    }

    cout << " | Nama Produk";
    for (int space = 0; space < longestLength[1] - 11; space++)
    {
        cout << " ";
    }
    
    cout << " | Harga";
    for (int i = 0; i < longestLength[2] - 5; i++)
    {
        cout << " ";
    }

    cout << " | Stok";
    for (int i = 0; i < longestLength[3] - 4; i++)
    {
        cout << " ";
    }
    
    cout << " | Jenis";
    for (int i = 0; i < longestLength[4] - 5; i++)
    {
        cout << " ";
    }

    cout << " | Bahan";
    for (int i = 0; i < longestLength[5] - 5; i++)
    {
        cout << " ";
    }

    cout << " | Warna";
    for (int i = 0; i < longestLength[6] - 5; i++)
    {
        cout << " ";
    }
    
    cout << " | Untuk Hewan";
    for (int i = 0; i < longestLength[7] - 11; i++)
    {
        cout << " ";
    }
    
    cout << " | Size";
    for (int i = 0; i < longestLength[8] - 4; i++)
    {
        cout << " ";
    }

    cout << " | Merk";
    for (int i = 0; i < longestLength[9] - 4; i++)
    {
        cout << " ";
    }
    
    cout << " |";

    cout << endl;

    for (int i = 0; i < panjangTabel; i++)
    {
        cout << "=";
    }
    
    cout << endl;

    // Isi table
    for(Baju item : listBarang){

        cout << "|" << item.getId();
        cout << " | " << item.getNama();
        for (int i = 0; i < longestLength[1] - item.getNama().length(); i++)
        {
            cout << " ";
        }

        cout << " | " << item.getHarga();
        string temp = to_string(item.getHarga());
        for (int i = 0; i < longestLength[2] - temp.length(); i++)
        {
            cout << " ";
        }

        cout << " | " << item.getStok();
        temp = to_string(item.getStok());
        for (int i = 0; i < longestLength[3] - temp.length(); i++)
        {
            cout << " ";
        }
        
        cout << " | " << item.getJenis();
        for (int i = 0; i < longestLength[4] - item.getJenis().length(); i++)
        {
            cout << " ";
        }
        
        cout << " | " << item.getBahan();
        for (int i = 0; i < longestLength[5] - item.getBahan().length(); i++)
        {
            cout << " ";
        }
        
        cout << " | " << item.getWarna();
        for (int i = 0; i < longestLength[6] - item.getWarna().length(); i++)
        {
            cout << " ";
        }

        cout << " | " << item.getUntukHewan();
        for (int i = 0; i < longestLength[7] - item.getUntukHewan().length(); i++)
        {
            cout << " ";
        }
        
        cout << " | " << item.getSize();
        for (int i = 0; i < longestLength[8] - item.getSize().length(); i++)
        {
            cout << " ";
        }

        cout << " | " << item.getMerk();
        for (int i = 0; i < longestLength[9] - item.getMerk().length(); i++)
        {
            cout << " ";
        }
        
        cout << " |";

        cout << endl;
        
    }

    // Tutup table
    for (int i = 0; i < panjangTabel; i++)
    {
        cout << "=";
    }


    
    return 0;
}