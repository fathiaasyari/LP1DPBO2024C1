class DPR:
    __nama = ""
    __id = ""
    __umur = 0
    __bidang = ""
    __partai = ""

    def __init__(self, nama, id, umur, bidang, partai):
        self.__nama = nama
        self.__id = id
        self.__umur = umur
        self.__bidang = bidang
        self.__partai = partai

    def get_nama(self):
        return self.__nama

    def set_nama(self, nama):
        self.__nama = nama

    def get_id(self):
        return self.__id

    def set_id(self, id):
        self.__id = id

    def get_umur(self):
        return self.__umur

    def set_umur(self, umur):
        self.__umur = umur

    def get_bidang(self):
        return self.__bidang

    def set_bidang(self, bidang):
        self.__bidang = bidang

    def get_partai(self):
        return self.__partai

    def set_partai(self, partai):
        self.__partai = partai
