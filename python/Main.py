from DPR import DPR

data_dpr = []

def tambah():
    print(" ")
    nama = input(" > Nama : ")
    id = input(" > ID : ")
    umur = int(input(" > Umur : "))
    bidang = input(" > Bidang : ")
    partai = input(" > Partai : ")
    
    data_dpr.append(DPR(nama, id, umur, bidang, partai))
    
    print("\nData berhasil ditambahkan!")

def perbarui():
    print("Masukkan ID yang akan diperbarui")
    cari = input()
    ketemu = False

    for member in data_dpr:
        if member.get_id() == cari:
            up_nama = input(" > Nama : ")
            up_id = input(" > ID : ")
            up_umur = int(input(" > Umur : "))
            up_bidang = input(" > Bidang : ")
            up_partai = input(" > Partai : ")

            member.set_nama(up_nama)
            member.set_id(up_id)
            member.set_umur(up_umur)
            member.set_bidang(up_bidang)
            member.set_partai(up_partai)

            ketemu = True

    if not ketemu:
        print("\n--------------------------")
        print("Data tidak ditemukan")
        print("--------------------------")
    else:
        print("\n--------------------------")
        print("Data berhasil diperbarui")
        print("--------------------------\n")

def hapus():
    print("Masukkan ID yang akan dihapus")
    print("--------------------------")
    cari = input()
    ketemu = False

    for member in data_dpr:
        if member.get_id() == cari:
            data_dpr.remove(member)
            ketemu = True

    if not ketemu:
        print("--------------------------")
        print("Data tidak ditemukan")
        print("--------------------------")
    else:
        print("--------------------------")
        print("Data berhasil dihapus")
        print("--------------------------")

def tampilkan():
    if not data_dpr:
        print("Tidak ada data yang tersedia")
    else:
        print("-------------------------------------------------------------")
        print("                   DATA ANGGOTA DPR                          ")
        print("-------------------------------------------------------------")
        print("| No |    Nama    |   ID   | Umur |   Bidang   |   Partai   |")
        print("-------------------------------------------------------------")
        i = 1
        for member in data_dpr:
            print(f"| {i:2d} | {member.get_nama():10s} | {member.get_id():6s} | {member.get_umur():4d} | {member.get_bidang():10s} | {member.get_partai():10s} |")
            i += 1
        print("-------------------------------------------------------------")



print("Halo, selamat datang !! ^^")
print("--------------------------")
query = 0

while query != 5:
    print("         PICK ONE        ")
    print("-------------------------")
    print("[1] Tambah Data")
    print("[2] Perbarui Data")
    print("[3] Hapus Data")
    print("[4] Tampilkan Data")
    print("[5] Keluar")
    print(" ")

    print("--------------------------")
    print("Masukkan Nomor Query!")
    query = int(input())

    if query == 1:
        tambah()
    elif query == 2:
        perbarui()
    elif query == 3:
        hapus()
    elif query == 4:
        tampilkan()


print("bubyee darling~")
print("---------------")
