public class DPR {
    private String nama;
    private int id;
    private int umur;
    private String bidang;
    private String partai;

    public DPR() {
    }

    public DPR(String nama, int id, int umur, String bidang, String partai) {
        this.nama = nama;
        this.id = id;
        this.umur = umur;
        this.bidang = bidang;
        this.partai = partai;
    }

    public String getNama() {
        return this.nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getId() {
        return this.id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getUmur() {
        return this.umur;
    }

    public void setUmur(int umur) {
        this.umur = umur;
    }

    public String getBidang() {
        return this.bidang;
    }

    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    public String getPartai() {
        return this.partai;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }
}
