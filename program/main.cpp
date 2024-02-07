/*
Saya Syaila Fathia Azzahra NIM 2206272 mengerjakan
soal LAT 1 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/


#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{

    memberDPR data;
    list<memberDPR> caleg;

    int i = 0, n = 0, query = 0, find = 0;
    int id = 0, iid = 0;
    int umur = 0;
    int cari = 0;
    int uumur;
    string nama, bidang, partai;
    string nnama, bbidang, ppartai;

    do
    {
        cout << "~~~PICK ONE~~~" << '\n';
        cout << "1. Tambah" << '\n';
        cout << "2. Perbarui" << '\n';
        cout << "3. Hapus" << '\n';
        cout << "4. Tampilkan" << '\n';
        cout << "5. Keluar" << '\n';
        cout << '\n';    

        cout << "Nomor berapa nih?" << '\n';
        cin >> query;

        if(query == 0 && query > 5)
        {
            cout << ("Gada di pilihan:(") << '\n';
        }

        switch(query)
        {
            case 1:
                cout << "Isi data dibawah ini yaa" << '\n';
                cout << "------------------------" << '\n';

                cout << "> Nama : ";
                cin >> nama;

                cout << "> id : ";
                cin >> id;

                cout << "> umur : ";
                cin >> umur;

                cout << "> bidang : ";
                cin >> bidang;

                cout << "> partai : ";
                cin >> partai;

                data.set_nama(nama);
                data.set_id(id);
                data.set_umur(umur);
                data.set_bidang(bidang);
                data.set_partai(partai);

                caleg.push_back(data);
                
                cout << '\n';
                cout << "Data berhasil masuk" << '\n';
                cout << "-------------------" << '\n' << '\n';
        
            break;

            case 2:
                cout << "Siapa nih yang mau diupdate, masukin idnya ya" << '\n';
                cout << "---------------------------------------------" << '\n';
                cin >> cari;

                find = 0;

                for (list<memberDPR>::iterator it = caleg.begin(); it != caleg.end(); it ++) 
                {
                    if(it->get_id() == cari) 
                    {
                        cout << "> Update Nama : ";
                        cin >> nnama;                      

                        cout << "> Update id : ";
                        cin >> iid;

                        cout << "> Update umur : ";
                        cin >> uumur;                       

                        cout << "> Update bidang : ";
                        cin >> bbidang;
                        
                        cout << "> Update partai : ";
                        cin >> ppartai;
                        

                        it->set_nama(nnama);
                        it->set_id(iid);
                        it->set_umur(uumur);
                        it->set_bidang(bbidang);
                        it->set_partai(ppartai);

                        find = 1;
                    }
                }
                if(find == 0)
                {
                    cout << '\n';
                    cout << "Data ga sesuai" << '\n';
                    cout << "--------------" << '\n';
                    cout << '\n';
                }
                else
                {
                    cout << '\n';
                    cout << "Data udah diupdate nih" << '\n';
                    cout << "----------------------" << '\n';
                    cout << '\n';
                }
            break;

            case 3:
                cout << "Siapa yang mau dihapus, masukin idnya ya:(" << '\n';
                cout << "------------------------------------------" << '\n';
                cin >> cari;

                find = 0;

                for (list<memberDPR>::iterator it = caleg.begin(); it != caleg.end(); it ++) 
                {
                    if(it->get_id() == cari)
                    {
                        caleg.erase(it);
                        it = caleg.end();
                        find = 1;
                    }
                }
                if(find == 0)
                {
                    cout << '\n';
                    cout << "Data ga sesuai" << '\n';
                    cout << "--------------" << '\n';
                    cout << '\n';
                }
                else
                {
                    cout << '\n';
                    cout << "Data udah dihapus yaa" << '\n';
                    cout << "----------------------" << '\n';
                    cout << '\n';
                }
            break;

            case 4:

            if (caleg.size() == 0) 
            {
                cout << "Nah lho, datanya gada" << '\n';
                cout << '\n';
            }

            for (list<memberDPR>::iterator it = caleg.begin(); it != caleg.end(); it++)
            {
                cout << "--------------------------" << '\n';
                cout << "       Data Angota DPR     " << '\n';
                cout << "--------------------------" << '\n';
                cout << "No : " << (i + 1) << '\n';
                cout << "Nama : " << it->get_nama() << '\n';
                cout << "Id : " << it->get_id() << '\n';
                cout << "Umur : " << it->get_id() << '\n';
                cout << "Bidang : " << it->get_bidang() << '\n';
                cout << "Partai : " << it->get_partai() << '\n';
                cout << "--------------------------" << '\n' << '\n';
                
                i++;
            }
            break;
        }
    } while (query != 5);
    
    cout << '\n';
    cout << "Bubyeee Darling" << '\n';
    cout << "-------" << '\n';
    
    return 0;
}