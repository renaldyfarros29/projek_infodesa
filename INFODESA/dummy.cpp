#include "infodesa.h"

void DataDummy(vector<Penduduk>& daftarPenduduk, vector<Users>& daftarUser, vector<Berita>& daftarBerita) {

    // 1. DUMMY AKUN DEFAULT
    daftarUser.push_back({ "ADMIN Perangkat Desa", "adminpd", "123", PerangkatDesa, true });
    daftarUser.push_back({ "ADMIN Warga", "adminw", "123", Warga, true });
    daftarUser.push_back({ "Alfian Chandra", "3404022607050002", "123", PerangkatDesa, true });
    //daftarUser.push_back({ "Lionel Ronaldo", "3404022607050003", "123", Warga, true });



    // 2. DUMMY DATA KEPENDUDUKAN
    daftarPenduduk.push_back({ "3404022607050001", "Budi Santoso", "Sleman, 26 Juni 2003", "Islam", "Pegawai Negeri", "S1", "Dusun Sidoagung RT 01/RW 02" });
    daftarPenduduk.push_back({ "3404022607050004", "Siti Aminah", "Yogyakarta, 15 Agustus 1995", "Islam", "Guru", "S1", "Dusun Sidomulyo RT 03/RW 01" });
    daftarPenduduk.push_back({ "3404022607050005", "Bambang Pamungkas", "Semarang, 17 Agustus 1980", "Islam", "Wiraswasta", "SMA", "Dusun Sidokarto RT 02/RW 04" });
    daftarPenduduk.push_back({ "3404022607050006", "Rina Wati", "Bantul, 09 September 1999", "Islam", "Perawat", "D3", "Dusun Sidoagung RT 01/RW 02" });
    daftarPenduduk.push_back({ "3404022607050007", "Agus Prasetyo", "Sleman, 05 April 1988", "Islam", "Polisi", "SMA", "Dusun Sidomoyo RT 05/RW 02" });
    daftarPenduduk.push_back({ "3404022607050008", "Sri Rahayu", "Klaten, 21 November 1975", "Islam", "Ibu Rumah Tangga", "SMP", "Dusun Sidoarum RT 04/RW 03" });
    daftarPenduduk.push_back({ "3404022607050009", "Eko Susanto", "Magelang, 14 Februari 1992", "Islam", "Karyawan Swasta", "S1", "Dusun Sidomulyo RT 02/RW 01" });
    daftarPenduduk.push_back({ "3404022607050010", "Endang Lestari", "Sleman, 30 Oktober 1985", "Islam", "Pedagang", "SMA", "Dusun Sidoarum RT 01/RW 05" });
    daftarPenduduk.push_back({ "3404022607050011", "Rizky Pratama", "Yogyakarta, 11 Maret 1998", "Islam", "Mahasiswa", "SMA", "Dusun Sidokarto RT 03/RW 03" });
    daftarPenduduk.push_back({ "3404022607050012", "Dewi Safitri", "Surakarta, 25 Desember 2001", "Islam", "Mahasiswa", "SMA", "Dusun Sidomoyo RT 01/RW 04" });
    daftarPenduduk.push_back({ "3404022607050002", "Alfian Chandra Putra Ardhiansyah", "Sleman, 26 Juli 2005", "Islam", "Mahasiswa", "SMA", "Dusun Sidomoyo RT 01/RW 04" });
    daftarPenduduk.push_back({ "3401022810040021", "Dhani", "Sleman, 28 Oktober 2004", "Islam", "Mobil", "SMA", "Dusun Sidomoyo RT 01/RW 04" });
    daftarPenduduk.push_back({ "1234567890", "Naffisa", "Sleman, 26 Juli 1900", "Islam", "Sepak Bola", "SMP", "Dusun Sidomoyo RT 01/RW 04" });
    daftarPenduduk.push_back({ "0987654321", "Farros", "Sleman, 26 Juli 1900", "Islam", "Sepak Bola", "SMP", "Dusun Sidomoyo RT 01/RW 04" });


    // 3. DUMMY BERITA
// Asumsi urutan struct/class: { ID, Judul, Isi, Tanggal, Lokasi }

    daftarBerita.push_back({ 1, "Jadwal Posyandu Balita & Lansia", "Posyandu diadakan besok jam 8 pagi di Balai Desa. Diharapkan kehadiran ibu balita dan lansia.", "06 Juli 2026, 08:00 WIB", "Balai Desa" });
    daftarBerita.push_back({ 2, "Gotong Royong Bersih Desa", "Kerja bakti pembersihan selokan utama akan dilaksanakan hari Minggu pagi. Warga diharap membawa alat kebersihan.", "12 Juli 2026, 07:00 WIB", "Sepanjang Jalan Utama Desa" });
    daftarBerita.push_back({ 3, "Pendaftaran Bantuan BLT Tahap 2", "Pendaftaran bantuan BLT tahap 2 dibuka mulai hari Senin depan. Mohon bawa kelengkapan fotokopi KK dan KTP.", "13 - 15 Juli 2026", "Loket Pelayanan Desa" });
    daftarBerita.push_back({ 4, "Perbaikan Jalan Utama", "Jalan utama desa akan ditutup sementara untuk pengaspalan. Warga dimohon untuk menggunakan jalur alternatif.", "08 - 10 Juli 2026", "Jalan Utama Dusun Sidoagung" });
    daftarBerita.push_back({ 5, "Rapat Persiapan HUT RI", "Rapat persiapan lomba 17 Agustus bertempat di Balai Desa malam ini. Diharapkan kehadiran seluruh ketua RT/RW.", "05 Juli 2026, 19:30 WIB", "Aula Balai Desa" });
    daftarBerita.push_back({ 6, "Pelatihan UMKM Digital", "Pelatihan digital marketing untuk pelaku usaha desa diadakan besok. Gratis dan terbuka untuk seluruh warga.", "07 Juli 2026, 09:00 WIB", "Ruang Rapat Kantor Desa" });
    daftarBerita.push_back({ 7, "Sosialisasi Pembayaran PBB", "Sosialisasi pembayaran pajak PBB dilakukan di kantor desa pukul 09.00 WIB bersama petugas dari Kecamatan.", "09 Juli 2026, 09:00 WIB", "Balai Desa" });
    daftarBerita.push_back({ 8, "Lomba Kebersihan Lingkungan", "Lomba kebersihan antar RT akan dinilai juri bulan depan. Kriteria penilaian meliputi kebersihan dan penghijauan.", "01 Agustus 2026", "Seluruh Wilayah RT" });
    daftarBerita.push_back({ 9, "Penyemprotan Fogging Nyamuk", "Penyemprotan fogging untuk pencegahan DBD dijadwalkan hari Rabu. Warga diharap menutup rapat makanan dan minuman.", "08 Juli 2026, 06:00 WIB", "Dusun Sidokarto & Sidomulyo" });
    daftarBerita.push_back({ 10, "Update Data Kependudukan", "Warga dimohon segera melapor ke perangkat desa jika ada perubahan data kependudukan (kelahiran, kematian, pindah).", "Paling lambat 31 Juli 2026", "Kantor Kepala Desa" });

}