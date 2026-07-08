# 1bit-bool
library untuk c++ yang akan membuat boolean disimpan hanya dengan 1 bit memory 

pada c++, untuk menyimpan kondisi 'true' dan 'false' atau '0' dan '1' normal nya menggunakan tipe data bool

namun ukuran terkecil yang bisa di-alamatkan pointer adalah 1 byte, jadi meskipun bool hanya menyimpan '0'dan '1' yang berarti hanya memerlukan 1 bit
c++ akan tetap mengalokasikan 1 byte memory 

dengan library ini, data '0' dan '1' dapat disimpan dalam 1 bit memory

yang akan membuat pemakain memory akan lebih kecil

## cara kerja

alih-alih menggunakan tipe data bool

```c++
bool x = true;
```

di library ini untuk menyimpan nilai kondisi menggunakan tipe data char dengan bantuan bitwise operation :

```c++
char x = 0b00000000;
```

karena char menggunakan 1 byte dengan kata lain 8 bit, dengan begitu char dapat menyimpan 8 nilai kondisi '0' dan '1'

```c++
sebagai contoh jika menggunakan bool :

bool a = false;
bool b = true;
bool c = false;
bool d = true;
bool e = false;
bool f = true;
bool g = false;
bool h = true;
```

jika seperti ini, program akan memakai 8 byte memory 
namun jika disimpan didalam char seperti ini :

``` c++
char a = 0b01010101;
```
program hanya akan memakai 1 byte memory tapi tetap menyimpan 8 nilai kondisi

## cara menggunakan 

