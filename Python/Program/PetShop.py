class PetShop:
    def __init__(self, id, nama, harga, stok):
        self.__id = id
        self.__nama_produk = nama
        self.__harga_produk = harga
        self.__stok_produk = stok
    # Setter dan Getter untuk atribut
    def setId(self, id):
        self.__id = id
    def getId(self):
        return self.__id
    
    def setNama(self, nama):
        self.__nama_produk = nama
    def getNama(self):
        return self.__nama_produk
    
    def setHarga(self, harga):
        self.__harga_produk = harga
    def getHarga(self):
        return self.__harga_produk
    
    def setStok(self, stok):
        self.__stok_produk = stok
    def getStok(self):
        return self.__stok_produk
    