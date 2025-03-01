class Baju extends Aksesoris{
    private String untukHewan;
    private String size;
    private String merk;
    
    Baju(String id, String nama, int harga, int stok){
        super(id, nama, harga, stok);
        this.untukHewan = "";
        this.size = "";
        this.merk = "";
    }

    public void setUntukHewan(String untuk){
        this.untukHewan = untuk;
    }
    public String getUntukHewan(){
        return this.untukHewan;
    }

    public void setSize(String size){
        this.size = size;
    }
    public String getSize(){
        return this.size;
    }

    public void setMerk(String merk){
        this.merk = merk;
    }
    public String getMerk(){
        return this.merk;
    }
}