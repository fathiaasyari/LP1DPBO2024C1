<?php

class DPR
{
    private $nama = '';
    private $id = '';
    private $umur = 0;
    private $bidang = '';
    private $partai = '';
    private $pict = ''; 

    public function __construct($nama = '', $id = '', $umur = 0, $bidang = '', $partai = '', $pict = '')
    {
        $this->nama = $nama;
        $this->id = $id;
        $this->umur = $umur;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->pict = $pict;
    }

    public function setNama($nama)
    {
        $this->nama = $nama;
    }
    public function getNama()
    {
        return $this->nama;
    }

    
    public function setId($id){
        $this->id = $id;
    }
    public function getId(){
        return $this->id;
    }

    public function setUmur($umur){
        $this->umur = $umur;
    }
    public function getUmur(){
        return $this->umur;
    }

    public function setBidang($bidang)
    {
        $this->bidang = $bidang;
    }
    public function getBidang()
    {
        return $this->bidang;
    }

    public function setPartai($partai)
    {
        $this->partai = $partai;
    }
    public function getPartai()
    {
        return $this->partai;
    }

    public function setPict($pict)
    {
        $this->pict = $pict;
    }
    public function getPict()
    {
        return $this->pict;
    }
}

?>
