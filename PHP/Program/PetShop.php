<?php
class PetShop{
    private $id;
    private $nama_produk;
    private $harga_produk;
    private $stok_produk;

    public function __construct($id, $nama, $harga, $stok) {
        $this->id = $id;
        $this->nama_produk = $nama;
        $this->harga_produk = $harga;
        $this->stok_produk = $stok;
    }

    public function setId($id){
        $this->id = $id;
    }
    public function getId(){
        return $this->id;
    }

    public function setNama($nama){
        $this->nama_produk = $nama;
    }
    public function getNama(){
        return $this->nama_produk;
    }

    public function setHarga($harga){
        $this->harga_produk = $harga;
    }
    public function getHarga(){
        return $this->harga_produk;
    }

    public function setStok($stok){
        $this->stok_produk = $stok;
    }
    public function getStok(){
        return $this->stok_produk;
    }
}