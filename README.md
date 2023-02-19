# UAS-AP-Dhema-Eka-P
Nama  : Dhema Eka Priantara\
Nim   : 220401010017\
Kelas : IT-102
----------------------------------------------------------------------------------------------------------------------------------------
Nomor 1
Program di atas merupakan program C++ yang menggunakan array 2 dimensi untuk menyimpan nilai. Program ini memiliki beberapa fitur, yaitu:

Mencari nilai terbesar dari array 2 dimensi.
Program menggunakan nested loop untuk memeriksa setiap elemen di dalam array, kemudian menyimpan nilai terbesar dalam variabel "max".

Mencari jumlah nilai terbesar dari array 2 dimensi.
Program menggunakan nested loop untuk memeriksa setiap elemen di dalam array, kemudian menambahkan 1 pada variabel "count" setiap kali menemukan nilai yang sama dengan "max".

Mencari apakah ada nilai tertentu dalam array 2 dimensi.
Program menggunakan nested loop untuk memeriksa setiap elemen di dalam array, kemudian mengubah nilai variabel "found" menjadi true jika nilai yang dicari ditemukan.

Setelah itu, program mencetak hasil dari setiap fitur yang dijalankan menggunakan perintah "cout". Akhirnya, program mengembalikan nilai 0 pada fungsi "main" sebagai tanda bahwa program telah selesai dijalankan.

----------------------------------------------------------------------------------------------------------------------------------------
Nomor 2
Penjelasan:

Pertama-tama, kita membuat array A dengan ukuran 3x5, dan sebuah pointer ptr yang menunjuk ke elemen pertama dari array A.
Selanjutnya, kita menggunakan loop for untuk mengisi array dengan nilai dari 1 sampai 9. Pada setiap iterasi, kita memasukkan nilai i ke dalam elemen yang ditunjuk oleh ptr, kemudian kita mencetak nilai dari elemen tersebut dengan menambahkan jeda 1.
Kita juga menambahkan conditional statement untuk mengecek apakah elemen yang ditunjuk oleh ptr adalah elemen kelima di setiap baris. Jika iya, maka kita memberikan jeda baris dengan menggunakan std::endl.
Terakhir, program akan mencetak isi setiap elemen pada array A dengan memberikan jeda 1 tiap isi.

----------------------------------------------------------------------------------------------------------------------------------------
NOMOR 3
Program yang telah dibuat adalah program C++ yang memungkinkan pengguna untuk menginput sebuah nilai integer lebih besar dari 10, kemudian menghitung total dari 1 hingga nilai integer yang diinputkan dengan menggunakan fungsi, dan akhirnya mencetak total tersebut di program utama.

Program ini terdiri dari dua fungsi, yaitu hitungTotal dan hitungTotalRekursif, yang masing-masing menghitung total dari 1 sampai n dengan menggunakan pendekatan yang berbeda. Fungsi hitungTotal menggunakan pendekatan tidak rekursif dengan menggunakan loop for untuk menghitung total, sementara fungsi hitungTotalRekursif menggunakan pendekatan rekursif dengan menggunakan rekursi untuk menghitung total.

Program utama dimulai dengan meminta pengguna untuk memasukkan sebuah nilai integer lebih besar dari 10. Kemudian, program memanggil fungsi hitungTotal untuk menghitung total dari 1 sampai nilai integer yang diinputkan dan mencetak hasilnya. Program kemudian memanggil fungsi hitungTotalRekursif untuk menghitung total dari 1 sampai nilai integer yang diinputkan secara rekursif dan mencetak hasilnya.

Program tersebut diakhiri dengan instruksi return 0;, yang mengembalikan nilai 0 ke sistem operasi sebagai tanda bahwa program telah sukses dijalankan.

----------------------------------------------------------------------------------------------------------------------------------------
NOMOR 4
Penjelasan:

Pada contoh program ini, kita membuat definisi class Mobil dengan tiga atribut yaitu merek, model, dan tahun.
Selanjutnya, kita membuat constructor untuk class Mobil yang akan digunakan untuk menginisialisasi nilai dari atribut saat object di-create.
Kemudian, kita membuat method cetakInfo yang digunakan untuk mencetak informasi mengenai object mobil, yaitu merek, model, dan tahun.
Pada function main, kita membuat object mobil1 dengan menggunakan constructor yang telah didefinisikan sebelumnya.
Terakhir, kita memanggil method cetakInfo dari mobil1 untuk mencetak informasi mengenai object tersebut.
