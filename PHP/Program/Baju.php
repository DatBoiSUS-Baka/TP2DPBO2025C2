<?php
require_once "Aksesoris.php";

class Baju extends Aksesoris{
    private $untukHewan;
    private $size;
    private $merk;
    private $foto;

    public function __construct($id, $nama, $harga, $stok, $jenis, $bahan, $warna, $untuk, $size, $merk, $foto) {
        parent::__construct($id, $nama, $harga, $stok, $jenis, $bahan, $warna);
        $this->untukHewan = $untuk;
        $this->size = $size;
        $this->merk = $merk;
        $this->foto = "default.jpg";
    }

    public function setUntukHewan($untuk){
        $this->untukHewan = $untuk;
    }
    public function getUntukHewan(){
        return $this->untukHewan;
    }

    public function setSize($size){
        $this->size = $size;
    }
    public function getSize(){
        return $this->size;
    }

    public function setMerk($merk){
        $this->merk = $merk;
    }
    public function getMerk(){
        return $this->merk;
    }

    public function getFoto(){
        return $this->foto;
    }
}