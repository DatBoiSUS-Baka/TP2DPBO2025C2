import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;

public class Main{
    public static void main(String[] args){
        LinkedList<Baju> listBarang = new LinkedList<>();
        listBarang.add(new Baju("001", "Collar", 20000, 15));
        listBarang.get(0).setJenis("Kalung");
        listBarang.get(0).setBahan("Leather");
        listBarang.get(0).setWarna("Coklat");
        listBarang.get(0).setUntukHewan("Kucing/Anjing");
        listBarang.get(0).setSize("M");
        listBarang.get(0).setMerk("Gucci");

        listBarang.add(new Baju("002", "BajuKucing", 15000, 10));
        listBarang.get(1).setJenis("BajuHewan");
        listBarang.get(1).setBahan("Katun");
        listBarang.get(1).setWarna("Merah");
        listBarang.get(1).setUntukHewan("Kucing");
        listBarang.get(1).setSize("M");
        listBarang.get(1).setMerk("Gucci");

        listBarang.add(new Baju("003", "Pasir", 30000, 30));
        listBarang.get(2).setJenis("Pasir");
        listBarang.get(2).setBahan("Pasir");
        listBarang.get(2).setWarna("Abu");
        listBarang.get(2).setUntukHewan("Kucing/Anjing");
        listBarang.get(2).setSize("L");
        listBarang.get(2).setMerk("LifeCat");

        listBarang.add(new Baju("004", "MakananKucing", 12500, 20));
        listBarang.get(3).setJenis("Makanan");
        listBarang.get(3).setBahan("Tuna");
        listBarang.get(3).setWarna("Coklat");
        listBarang.get(3).setUntukHewan("Kucing");
        listBarang.get(3).setSize("M");
        listBarang.get(3).setMerk("Whiskas");

        listBarang.add(new Baju("005", "MainanAnjing", 10000, 15));
        listBarang.get(4).setJenis("Mainan");
        listBarang.get(4).setBahan("Plastik");
        listBarang.get(4).setWarna("Hijau");
        listBarang.get(4).setUntukHewan("Anjing");
        listBarang.get(4).setSize("S");
        listBarang.get(4).setMerk("LifeCat");

        System.out.println("Ingin input berapa kali?");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i = 0; i < n; i++){
            System.out.println("Masukkan nama Barang:");
            String id = scanner.next();
            String nama = scanner.next();
            int harga = scanner.nextInt();
            int stok = scanner.nextInt();
            String jenis = scanner.next();
            String bahan = scanner.next();
            String warna = scanner.next();
            String untuk = scanner.next();
            String size = scanner.next();
            String merk = scanner.next();

            Baju hold = new Baju(id, nama, harga, stok);
            hold.setJenis(jenis);
            hold.setBahan(bahan);
            hold.setWarna(warna);
            hold.setUntukHewan(untuk);
            hold.setSize(size);
            hold.setMerk(merk);

            listBarang.add(hold);
        }

        ArrayList<Integer> longestLength = new ArrayList<>();
        longestLength.add(3);
        longestLength.add(11);
        longestLength.add(5);
        longestLength.add(4);
        longestLength.add(5);
        longestLength.add(5);
        longestLength.add(5);
        longestLength.add(11);
        longestLength.add(4);
        longestLength.add(4);

        for(Baju item : listBarang){
            if(longestLength.get(0) < item.getId().length()) longestLength.set(0, item.getId().length());
            
            if(longestLength.get(1) < item.getNama().length()) longestLength.set(1, item.getNama().length());

            String temp = String.valueOf(item.getHarga());
            if(longestLength.get(2) < temp.length()) longestLength.set(2, temp.length());

            temp = String.valueOf(item.getStok());
            if(longestLength.get(3) < temp.length()) longestLength.set(3, temp.length());

            if(longestLength.get(4) < item.getJenis().length()) longestLength.set(4, item.getJenis().length());

            if(longestLength.get(5) < item.getBahan().length()) longestLength.set(5, item.getBahan().length());

            if(longestLength.get(6) < item.getWarna().length()) longestLength.set(6, item.getWarna().length());

            if(longestLength.get(7) < item.getUntukHewan().length()) longestLength.set(7, item.getUntukHewan().length());

            if(longestLength.get(8) < item.getSize().length()) longestLength.set(8, item.getSize().length());

            if(longestLength.get(9) < item.getMerk().length()) longestLength.set(9, item.getMerk().length());
        }

        int panjangTabel = 0;
        for(int i = 0; i < 10; i++){
            panjangTabel += longestLength.get(i) + 3;
        }

        for(int i = 0; i < panjangTabel; i++) System.out.print("=");
        System.out.println();

        // Header Table
        System.out.print("|ID "); for(int space = 0; space < longestLength.get(0) - 3; space++) System.out.print(" ");
        System.out.print("| Nama Produk "); for(int space = 0; space < longestLength.get(1) - 11; space++) System.out.print(" ");
        System.out.print("| Harga "); for(int space = 0; space < longestLength.get(2) - 5; space++) System.out.print(" ");
        System.out.print("| Stok "); for(int space = 0; space < longestLength.get(3) - 4; space++) System.out.print(" ");
        System.out.print("| Jenis "); for(int space = 0; space < longestLength.get(4) - 5; space++) System.out.print(" ");
        System.out.print("| Bahan "); for(int space = 0; space < longestLength.get(5) - 5; space++) System.out.print(" ");
        System.out.print("| Warna "); for(int space = 0; space < longestLength.get(6) - 5; space++) System.out.print(" ");
        System.out.print("| Untuk Hewan "); for(int space = 0; space < longestLength.get(7) - 11; space++) System.out.print(" ");
        System.out.print("| Size "); for(int space = 0; space < longestLength.get(8) - 4; space++) System.out.print(" ");
        System.out.print("| Merk "); for(int space = 0; space < longestLength.get(9) - 4; space++) System.out.print(" ");
        System.out.println(" |");

        for(int i = 0; i < panjangTabel; i++) System.out.print("=");
        System.out.println();

        for(Baju item : listBarang){
            System.out.print("|" + item.getId());
            System.out.print(" | " + item.getNama());
            for(int space = 0; space < longestLength.get(1) - item.getNama().length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getHarga());
            String temp = String.valueOf(item.getHarga());
            for(int space = 0; space < longestLength.get(2) - temp.length(); space++) System.out.print(" ");
            
            System.out.print(" | " + item.getStok());
            temp = String.valueOf(item.getStok());
            for(int space = 0; space < longestLength.get(3) - temp.length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getJenis());
            for(int space = 0; space < longestLength.get(4) - item.getJenis().length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getBahan());
            for(int space = 0; space < longestLength.get(5) - item.getBahan().length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getWarna());
            for(int space = 0; space < longestLength.get(6) - item.getWarna().length(); space++) System.out.print(" ");
            
            System.out.print(" | " + item.getUntukHewan());
            for(int space = 0; space < longestLength.get(7) - item.getUntukHewan().length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getSize());
            for(int space = 0; space < longestLength.get(8) - item.getSize().length(); space++) System.out.print(" ");

            System.out.print(" | " + item.getMerk());
            for(int space = 0; space < longestLength.get(9) - item.getMerk().length(); space++) System.out.print(" ");
            
            System.out.println(" |");
        }
        
        for(int i = 0; i < panjangTabel; i++) System.out.print("=");
        System.out.println();
    }
}