<?php
require_once "Baju.php";
session_start();

if(!isset($_SESSION['clerk'])){
    $_SESSION['clerk'] = [
        new Baju("001", "Kalung", 20000, 15, "Kalung", "Leather", "Coklat", "Kucing/Anjing", "M", "Gucci", "default.jpg"),
        new Baju("002", "BajuKucing", 15000, 10, "BajuHewan", "Katun", "Merah", "Kucing", "M", "Gucci", "default.jpg"),
        new Baju("003", "Pasir", 30000, 30, "Pasir", "Pasir", "Abu", "Any", "L", "LifeCat", "default.jpg"),
        new Baju("004", "MakananKucing", 12500, 20, "Makanan", "Tuna", "Coklat", "Kucing", "M", "Whiskas", "default.jpg"),
        new Baju("005", "MainanAnjing", 10000, 15, "Mainan", "Plastik", "Hijau", "Anjing", "S", "LifeCat", "default.jpg")
    ];
}



header("Location: Main.php");
exit();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <h1>List Barang</h1>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk Hewan Apa</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>
        <?php foreach($_SESSION['clerk'] as $item){ ?>
            <tr>
                <td><?= $item->getId() ?></td>
                <td><?= $item->getNama() ?></td>
                <td>Rp<?= number_format($item->getHarga(), 0, ',', '.') ?></td>
                <td><?= $item->getStok() ?></td>
                <td><?= $item->getJenis() ?></td>
                <td><?= $item->getBahan() ?></td>
                <td><?= $item->getWarna() ?></td>
                <td><?= $item->getUntukHewan() ?></td>
                <td><?= $item->getSize() ?></td>
                <td><?= $item->getMerk() ?></td>
                <td><img src="Photos/<?php $produk->getFoto() ?>" alt=""></td>
            </tr>
        <?php } ?>
    </table>

</body>
</html>