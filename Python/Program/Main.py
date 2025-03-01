from Baju import Baju

listBarang = []

listBarang.append(Baju("001", "Kalung", 20000, 15, "Kalung",
                       "Leather", "Coklat", "Kucing/Anjing",
                       "M", "Gucci"))
listBarang.append(Baju("002", "BajuKucing", 15000, 10,
                       "BajuHewan", "Katun", "Merah", "Kucing",
                       "M", "Gucci"))
listBarang.append(Baju("003", "Pasir", 30000, 30,
                       "Pasir", "Pasir", "Abu", "Any", "L",
                       "LifeCat"))
listBarang.append(Baju("004", "MakananKucing", 12500, 20, "Makanan",
                       "Tuna", "Coklat", "Kucing", "M", "Whiskas"))
listBarang.append(Baju("005", "MainanAnjing", 10000, 15, "Mainan",
                       "Plastik", "Hijau", "Anjing", "S", "LifeCat"))

n = int(input("Ingin input berapa kali? "))

for i in range(n):
    print("Masukkan id barang:")
    idBaru = input()
    print("Masukkan nama barang:")
    namaBaru = input()
    print("Masukkan harga barang:")
    hargaBaru = int(input())
    print("Masukkan stok barang:")
    stokBaru = int(input())
    print("Masukkan jenis barang:")
    jenisBaru = input()
    print("Masukkan bahan barang:")
    bahanBaru = input()
    print("Masukkan warna barang:")
    warnaBaru = input()
    print("Masukkan untuk hewan apa barang ini:")
    untukBaru = input()
    print("Masukkan size barang:")
    sizeBaru = input()
    print("Masukkan merk barang:")
    merkBaru = input()

    listBarang.append(Baju(idBaru, namaBaru, hargaBaru,
    stokBaru, jenisBaru, bahanBaru, warnaBaru, untukBaru,
    sizeBaru, merkBaru))

longestLength = [3, 11, 5, 4, 5, 5, 5, 11, 4, 4]

for item in listBarang:
    if(longestLength[0] < len(item.getId())):
        longestLength[0] = len(item.getId())
    if(longestLength[1] < len(item.getNama())):
        longestLength[1] = len(item.getNama())
    temp = str(item.getHarga())
    if(longestLength[2] < len(temp)):
        longestLength[2] = len(temp)
    temp = str(item.getStok())
    if(longestLength[3] < len(temp)):
        longestLength[3] = len(temp)
    if(longestLength[4] < len(item.getJenis())):
        longestLength[4] = len(item.getJenis())
    if(longestLength[5] < len(item.getBahan())):
        longestLength[5] = len(item.getBahan())
    if(longestLength[6] < len(item.getWarna())):
        longestLength[6] = len(item.getWarna())
    if(longestLength[7] < len(item.getUntukHewan())):
        longestLength[7] = len(item.getUntukHewan())
    if(longestLength[8] < len(item.getSize())):
        longestLength[8] = len(item.getSize())
    if(longestLength[9] < len(item.getMerk())):
        longestLength[9] = len(item.getMerk())

panjangTabel = 0
for i in range(10): panjangTabel += longestLength[i] + 3
print("=" * panjangTabel)

print("|ID ", end='')
for i in range(longestLength[0] - 3): print(' ', end='')

print(" | Nama Produk", end='')
for i in range(longestLength[1] - 11): print(' ', end='')

print(" | Harga", end="")
for i in range(longestLength[2] - 5): print(" ", end="")

print(" | Stok", end="")
for i in range(longestLength[3] - 4): print(" ", end="")

print(" | Jenis", end="")
for i in range(longestLength[4] - 5): print(" ", end="")

print(" | Bahan", end="")
for i in range(longestLength[5] - 5): print(" ", end="")

print(" | Warna", end="")
for i in range(longestLength[6] - 5): print(" ", end="")

print(" | Untuk Hewan", end="")
for i in range(longestLength[7] - 11): print(" ", end="")

print(" | Size", end='')
for i in range(longestLength[8] - 4): print(" ", end="")

print(" | Merk", end='')
for i in range(longestLength[9] - 4): print(" ", end="")

print(" |")
print("=" * panjangTabel)

for item in listBarang:
    print(f"|{item.getId()}", end="")
    print(f" | {item.getNama()}", end='')
    print(' ' * (longestLength[1] - len(item.getNama())), end='')
    temp = str(item.getHarga())
    print(f" | {item.getHarga()}", end='')
    print(' ' * (longestLength[2] - len(temp)), end='')
    temp = str(item.getStok())
    print(f" | {item.getStok()}", end='')
    print(' ' * (longestLength[3] - len(temp)), end='')
    print(f" | {item.getJenis()}", end='')
    print(' ' * (longestLength[4] - len(item.getJenis())), end='')
    print(f" | {item.getBahan()}", end='')
    print(' ' * (longestLength[5] - len(item.getBahan())), end='')
    print(f" | {item.getWarna()}", end='')
    print(' ' * (longestLength[6] - len(item.getWarna())), end='')
    print(f" | {item.getUntukHewan()}", end='')
    print(' ' * (longestLength[7] - len(item.getUntukHewan())), end='')
    print(f" | {item.getSize()}", end='')
    print(' ' * (longestLength[8] - len(item.getSize())), end='')
    print(f" | {item.getMerk()}", end='')
    print(' ' * (longestLength[9] - len(item.getMerk())), end='')
    
    print(" |")
print("=" * panjangTabel)