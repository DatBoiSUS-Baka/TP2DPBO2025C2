from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk):
        super().__init__(id, nama, harga, stok, jenis, bahan, warna)
        self.__untukHewan = untuk
        self.__size = size
        self.__merk = merk

    def setUntukHewan(self, untuk):
        self.__untukHewan = untuk
    def getUntukHewan(self):
        return self.__untukHewan
    
    def setSize(self, size):
        self.__size = size
    def getSize(self):
        return self.__size
    
    def setMerk(self, merk):
        self.__merk = merk
    def getMerk(self):
        return self.__merk