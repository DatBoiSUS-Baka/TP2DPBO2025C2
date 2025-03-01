class PetShop{
    private String id;
    private String nama_produk;
    private int harga_produk;
    private int stok_produk;

    PetShop(String id, String nama, int harga, int stok){
        this.id = id;
        this.nama_produk = nama;
        this.harga_produk = harga;
        this.stok_produk = stok;
    }

    // Setter dan Getter untuk atribut
    public void setId(String id){
        this.id = id;
    }
    public String getId(){
        return this.id;
    }

    public void setNama(String nama){
        this.nama_produk = nama;
    }
    public String getNama(){
        return this.nama_produk;
    }

    public void setHarga(int harga){
        this.harga_produk = harga;
    }
    public int getHarga(){
        return this.harga_produk;
    }

    public void setStok(int stok){
        this.stok_produk = stok;
    }
    public int getStok(){
        return this.stok_produk;
    }
}