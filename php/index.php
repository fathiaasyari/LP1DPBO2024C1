
<?php
    require('DPR.php');

    function createDPR($nama, $id, $umur, $bidang, $partai, $pict, &$arrayDPR) {
        $dpr = new DPR($nama, $id, $umur, $bidang, $partai, $pict);
        array_push($arrayDPR, $dpr);
    }
    
    function updateDPR($nama, $id, $umur, $bidang, $partai, $pict, &$arrayDPR) {
        foreach ($arrayDPR as $key => $value) {
            if ($arrayDPR[$key]->getId() == $id) {
                $arrayDPR[$key] = new DPR($nama, $id, $umur, $bidang, $partai, $pict);
                return;
            }
             
        }
    }
    
    function deleteDPR($id, &$arrayDPR) {
        foreach ($arrayDPR as $key => $value) {
            if ($arrayDPR[$key]->getId() == $id) {
                unset($arrayDPR[$key]);
                return;
            }
        }
    }
    
    function displayTable($arrayDPR) {
        echo "<h2><b><center>Data DPR</center></b></h2>";
        echo '<hr>';
        
        if (!empty($arrayDPR)) {
            echo "<table border='1'>";
            echo "<tr>";
            echo "<th style='min-width: 80px'>Nama</th>";
            echo "<th style='min-width: 80px'>ID</th>";
            echo "<th style='min-width: 80px'>Umur</th>";
            echo "<th style='min-width: 80px'>Bidang</th>";
            echo "<th style='min-width: 80px'>Partai</th>";
            echo "<th style='min-width: 80px'>Foto</th>";
            echo "</tr>";
            
            foreach ($arrayDPR as $dpr) {
                echo "<tr>";
                echo "<td>" . $dpr->getNama() . "</td>";
                echo "<td>" . $dpr->getId() . "</td>";
                echo "<td>" . $dpr->getUmur() . "</td>";
                echo "<td>" . $dpr->getBidang() . "</td>";
                echo "<td>" . $dpr->getPartai() . "</td>";
                echo "<td><img src='" . $dpr->getPict() . "' style='width: 150px'></td>";
                echo "</tr>";
            }
            
            echo "</table>";
        } else {
            echo "Tidak ada data DPR.";
        }
    }    

    $arrayDPR = [];

    createDPR('abil', '321', 20, 'Teknologi', 'PDIP', 'images1.png', $arrayDPR);
    createDPR('thia', '123', 19, 'Hukum', 'Golkar', 'images2.png', $arrayDPR);
    createDPR('anip', '943', 20, 'Kesehatan', 'PKS', 'images1.png', $arrayDPR);
    createDPR('raya', '528', 19, 'Kehutanan', 'Gerindra', 'images2.png', $arrayDPR);
    
    displayTable($arrayDPR);
    echo "Berhasil Menambahkan data";

    updateDPR('abil', '321', 20, 'Keamanan', 'Gerindra', 'images1.png', $arrayDPR);
    updateDPR('thia', '123', 19, 'Hukum', 'Golkar', 'images2.png', $arrayDPR);
    updateDPR('anip', '943', 20, 'Kesehatan', 'PKS', 'images1.png', $arrayDPR);
    updateDPR('raya', '528', 19, 'Teknologi', 'PDIP', 'images2.png', $arrayDPR);

    displayTable($arrayDPR);
    echo "Berhasil Mengubah data";


    deleteDPR('943', $arrayDPR);
    deleteDPR('528', $arrayDPR);
    displayTable($arrayDPR);
    echo "Berhasil Menghapus data";


?>

