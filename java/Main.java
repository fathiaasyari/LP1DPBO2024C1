import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<DPR> caleg = new ArrayList<>();
        int query;
        
        do {
            System.out.println("Halo, selamat datang!! ^^");
            System.out.println("~~~PICK ONE~~~");
            System.out.println("1. Tambah");
            System.out.println("2. Perbarui");
            System.out.println("3. Hapus");
            System.out.println("4. Tampilkan");
            System.out.println("5. Keluar");
            System.out.println();

            System.out.println("Nomor berapa nih?");
            query = scanner.nextInt();

            switch (query) {
                case 1:
                    System.out.println("Isi data dibawah ini yaa");
                    System.out.println("------------------------");
                    
                    System.out.print("> Nama : ");
                    String nama = scanner.next();
                    System.out.print("> id : ");
                    int id = scanner.nextInt();
                    System.out.print("> umur : ");
                    int umur = scanner.nextInt();
                    System.out.print("> bidang : ");
                    String bidang = scanner.next();
                    System.out.print("> partai : ");
                    String partai = scanner.next();

                    DPR data = new DPR(nama, id, umur, bidang, partai);
                    caleg.add(data);

                    System.out.println("\nData berhasil masuk\n");
                    System.out.println("-------------------\n");

                    break;

                case 2:
                    System.out.println("Siapa nih yang mau diupdate, masukin idnya ya");
                    System.out.println("---------------------------------------------");
                    int cari = scanner.nextInt();
                    boolean find = false;

                    for (DPR anggota : caleg) {
                        if (anggota.getId() == cari) {
                            System.out.print("> Update Nama : ");
                            anggota.setNama(scanner.next());
                            System.out.print("> Update id : ");
                            anggota.setId(scanner.nextInt());
                            System.out.print("> Update umur : ");
                            anggota.setUmur(scanner.nextInt());
                            System.out.print("> Update bidang : ");
                            anggota.setBidang(scanner.next());
                            System.out.print("> Update partai : ");
                            anggota.setPartai(scanner.next());
                            find = true;
                            break;
                        }
                    }

                    if (!find) {
                        System.out.println("\nData ga sesuai\n--------------\n");
                    } else {
                        System.out.println("\nData udah diupdate nih\n----------------------\n");
                    }
                    break;

                case 3:
                    System.out.println("Siapa yang mau dihapus, masukin idnya ya:(");
                    System.out.println("------------------------------------------");
                    int cariHapus = scanner.nextInt();
                    boolean found = false;

                    for (int i = 0; i < caleg.size(); i++) {
                        if (caleg.get(i).getId() == cariHapus) {
                            caleg.remove(i);
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        System.out.println("\nData ga sesuai\n--------------\n");
                    } else {
                        System.out.println("\nData udah dihapus yaa\n----------------------\n");
                    }
                    break;

                case 4:
                    if (caleg.isEmpty()) {
                System.out.println("Nah lho, datanya gada\n");
            } else {
                System.out.println("-------------------------------------------------------------");
                System.out.println("                    Data Anggota DPR                         ");
                System.out.println("-------------------------------------------------------------");
                System.out.println("| No |    Nama    |   ID   | Umur |   Bidang   |   Partai   |");
                System.out.println("-------------------------------------------------------------");
                for (int i = 0; i < caleg.size(); i++) {
                    DPR anggota = caleg.get(i);
                    System.out.printf("| %2d | %-10s | %-6s | %-4d | %-10s | %-10s |\n",
                            i + 1,
                            anggota.getNama(),
                            anggota.getId(),
                            anggota.getUmur(),
                            anggota.getBidang(),
                            anggota.getPartai());
                System.out.println("-------------------------------------------------------------");
                }
        }

            }
        } while (query != 5);

        System.out.println("\nBubyeee Darling\n-------");
    }
}
