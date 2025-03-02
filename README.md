# TP2DPBO2025C2
# Janji
Saya Kasyful Haq Bachariputra dengan NIM 2304820 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![diagram](https://github.com/user-attachments/assets/6d4a2590-9310-45de-b53a-622d0456b35d)

# Penjelasan Program dan Alur
## Program
Pada program ini terdapat tiga class, yaitu PetShop, Aksesoris, dan Baju:
### PetShop
    Atribut:
        - id(String) = Berisi Id dari barang
        - nama_produk(String) = Nama dari barang
        - harga_produk(Integer) = Harga jual barang
        - stok_produk(Integer) = Stok barang
    Method:
        - setId
        - getId
        - setNama
        - getNama
        - setHarga
        - getHarga
        - setStok
        - getStok
### Aksesoris (Anak dari PetShop)
    Atribut:
        - jenis(String) = Jenis/kategori barang
        - bahan(String) = Terbuat dari bahan apa barang tersebut
        - warna(String) = Warna barang
    Method:
        - setJenis
        - getJenis
        - setBahan
        - getBahan
        - setWarna
        - getWarna
### Baju (Anak dari Aksesoris)
    Atribut:
        - untukHewan(String) = Untuk hewan apa barang tersebut
        - size(String) = Ukuran dari barang
        - merk(String) = Merk dari barang
## Alur
    Ketika program pertama dijalankan, sudah terdapat 5 buah objek yang diinstansiasi. Kemudian program akan meminta input untuk berapa banyak barang akan ditambah.
    Lalu program akan meminta inputtan untuk semua atribut, kemudian menginstansiasi objek baru dan langsung menambahkan barang tersebut ke dalam tabel.
    Kemudian tabel akan menampilkan list barang yang ada.
