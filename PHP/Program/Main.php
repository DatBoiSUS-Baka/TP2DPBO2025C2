<?php
require_once "Baju.php";

session_start();

if(!is_dir("Photos")){
    mkdir("Photos", 0777, true);
}

if(!isset($_SESSION['clerk'])){
    $_SESSION['clerk'] = [
        new Baju("001", "Collar", 20000, 15, "Kalung", "Leather", "Coklat", "Kucing/Anjing", "M", "Gucci", "default.jpg"),
        new Baju("002", "BajuKucing", 15000, 10, "BajuHewan", "Katun", "Merah", "Kucing", "M", "Gucci", "default.jpg"),
        new Baju("003", "Pasir", 30000, 30, "Pasir", "Pasir", "Abu", "Any", "L", "LifeCat", "default.jpg"),
        new Baju("004", "MakananKucing", 12500, 20, "Makanan", "Tuna", "Coklat", "Kucing", "M", "Whiskas", "default.jpg"),
        new Baju("005", "MainanAnjing", 10000, 15, "Mainan", "Plastik", "Hijau", "Anjing", "S", "LifeCat", "default.jpg"),
    ];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = $_POST["id"];
    $nama_produk = $_POST["nama_produk"];
    $harga_produk = $_POST["harga_produk"];
    $stok_produk = $_POST["stok_produk"];
    $jenis = $_POST["jenis"];
    $bahan = $_POST["bahan"];
    $warna = $_POST["warna"];
    $untuk = $_POST["untuk"];
    $size = $_POST["size"];
    $merk = $_POST["merk"];
    
    $newProduct = new Baju($id, $nama_produk, $harga_produk, $stok_produk, $jenis, $bahan, $warna, $untuk, $size, $merk, "default.jpg");
    
    // Add new product to session
    $_SESSION['clerk'][] = $newProduct;
    header("Location: Main.php"); // Refresh halaman untuk mencegah re-submit form
    exit();
}


?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PetShop</title>
    <style>
        table, th, td {border: 1px solid black;}
    </style>
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
            <th>Foto</th>
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
                <td><img src=Photos/<?= $item->getFoto(); ?> alt="" width="100"></td>
            </tr>
        <?php } ?>
    </table>

    <form method="post">
        <label for="id">ID:</label>
        <input type="text" id="id" name="id" required><br>

        <label for="nama_produk">Nama Barang:</label>
        <input type="text" id="nama_produk" name="nama_produk" required><br>

        <label for="harga_produk">Harga Barang:</label>
        <input type="number" id="harga_produk" name="harga_produk" required><br>

        <label for="stok_produk">Stok Barang:</label>
        <input type="number" id="harga_produk" name="harga_produk" required><br>
        
        <label for="jenis">Jenis:</label>
        <input type="text" id="jenis" name="jenis" required><br>

        <label for="bahan">Bahan:</label>
        <input type="text" id="bahan" name="bahan" required><br>

        <label for="warna">Warna:</label>
        <input type="text" id="warna" name="warna" required><br>

        <label for="untuk">Untuk:</label>
        <input type="text" id="untuk" name="untuk"><br>

        <label for="size">Size:</label>
        <input type="text" id="size" name="size"><br>

        <label for="merk">Merk:</label>
        <input type="text" id="merk" name="merk" required>

        <button type="submit">Tambah Barang</button>
    </form>
</body>
</html>