from PetShop import PetShop

class Aksesoris(PetShop):
    def __init__(self, id, nama, harga, stok, jenis, bahan, warna):
        super().__init__(id, nama, harga, stok)
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    def setJenis(self, jenis):
        self.__jenis = jenis
    def getJenis(self):
        return self.__jenis
    
    def setBahan(self, bahan):
        self.__bahan = bahan
    def getBahan(self):
        return self.__bahan
    
    def setWarna(self, warna):
        self.__warna = warna
    def getWarna(self):
        return self.__warna
    