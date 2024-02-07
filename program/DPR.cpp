/*
Saya Syaila Fathia Azzahra NIM 2206272 mengerjakan
soal LAT 1 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/


#include <iostream>
#include <string>

using namespace std;

class memberDPR
{ 
   
    private:
        string nama;
        int id;
        int umur;
        string bidang;
        string partai;

    public:

        memberDPR()
        {

        }

        memberDPR(string nama, int id, int umur, string bidang, string partai)
        {
            this->nama = nama;
            this->id = id;
            this->umur = umur;
            this->bidang = bidang;
            this->partai = partai;
        }

        string get_nama()
        {
            return this->nama;
        }

        void set_nama(string nama)
        {
            this->nama = nama;
        }

        int get_id()
        {
            return this->id;
        }

        void set_id(int id)
        {
            this->id = id;
        }

         int get_umur()
        {
            return this->umur;
        }

        void set_umur(int umur)
        {
            this->umur = umur;
        }

        string get_bidang()
        {
            return this->bidang;
        }

        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }

        string get_partai()
        {
            return this->partai;
        }

        void set_partai(string partai)
        {
            this->partai = partai;
        }

        ~memberDPR()
        {

        }
};