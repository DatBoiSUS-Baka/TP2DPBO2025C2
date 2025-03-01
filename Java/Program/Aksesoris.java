class Aksesoris extends PetShop{
    private String jenis;
    private String bahan;
    private String warna;

    Aksesoris(String id, String nama, int harga, int stok){
        super(id, nama, harga, stok);
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    public void setJenis(String jenis){
        this.jenis = jenis;
    }
    public String getJenis(){
        return this.jenis;
    }

    public void setBahan(String bahan){
        this.bahan = bahan;
    }
    public String getBahan(){
        return this.bahan;
    }

    public void setWarna(String warna){
        this.warna = warna;
    }
    public String getWarna(){
        return this.warna;
    }
}