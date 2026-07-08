# 1bit-bool
library untuk c++ yang akan membuat boolean disimpan hanya dengan 1 bit memory 

pada c++, untuk menyimpan kondisi 'true' dan 'false' atau '0' dan '1' normal nya menggunakan tipe data bool

namun ukuran terkecil yang bisa di-alamatkan pointer adalah 1 byte, jadi meskipun bool hanya menyimpan '0'dan '1' yang berarti hanya memerlukan 1 bit
c++ akan tetap mengalokasikan 1 byte memory 

dengan library ini, data '0' dan '1' dapat disimpan dalam 1 bit memory

yang akan membuat pemakain memory akan lebih kecil

## cara kerja
