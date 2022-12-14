# ILAB-Teknik-Pemrograman-Terstruktur-1
# Semangat

Topik 2
[2.1]

NO [1]

#include <stdio.h>

int main()
{
	// Mendeklarasikan variabel totalBelanja dan gratisOngkir
	float totalBelanja,gratisOngkir;

    // Menampilkan output dan melakukan input ke variabel totalBelanja
  	printf("Masukkan total belanja Anda : Rp. \n");
  	scanf("%f", &totalBelanja);

    // Block statement if, jika totalBelanja lebih besar atau sama dengan 75000 maka akan mendapatkan ongkir
  	if (totalBelanja >= 75000)
  	{
  	    gratisOngkir = 20000;
            printf("Total belanja Anda : Rp. %.2f\n", totalBelanja);
            printf("Selamat! Anda mendapatkan gratis ongkir sebesar Rp. %.2f\n", gratisOngkir);
 	}
 	// Block statement else dijalankan jika kondisi if di atas tidak terpenuhi
 	else
 	{
      	    gratisOngkir = 0;
       	    printf("Total belanja Anda : Rp. %.2f\n", totalBelanja);
    	    printf("Maaf, Anda belum mendapatkan gratis ongkir. \n");
 	}

    return 0;
}



NO[2]

#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel umur dengan tipe data int
    int umur;
    
    // Menampilkan output berupa kalimat dan input nilai ke variabel umur
    printf("Silahkan masukkan umur: \n");
    scanf("%d", &umur);

    // Block if jika umur lebih besar dari 11 maka dapat divaksin
    if (umur >= 6)
        printf("Umur Anda sudah 6 tahun ke atas. Anda dapat divaksin.\n");
        
    // Block else jika kondisi if di atas tidak terpenuhi
    else
        printf("Umur Anda kurang dari 6 tahun. Maaf, Anda tidak dapat divaksin.\n");

    return 0;
}



NO [3]

#include <stdio.h>

int main()
{
	// Mendeklarasikan variabel dengan tipe data int
	int nilaiBella, nilaiArthur;

    // Mencetak output dan meminta input ke pengguna
    printf("Masukkan nilai yang berbeda pada kedua nilai berikut!\n");
	printf("Nilai final Bella : \n");
	scanf("%d", &nilaiBella );
	printf("Nilai final Arthur : \n");
	scanf("%d",&nilaiArthur);
	printf("\n");

	if (nilaiBella >= nilaiArthur)
		printf("Selamat kepada Bella sebagai pemenang Virtual Math Competition 2021 dengan poin %i!\n", nilaiBella);
	else
		printf("Selamat kepada Arthur sebagai pemenang Virtual Math Competition 2021 dengan poin %i!\n", nilaiArthur);

    return 0;
}


NO [4]

#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel umur dengan tipe data int
    int umur;
    
    // Menampilkan output berupa kalimat dan input nilai ke variabel umur
    printf("Silahkan masukkan umur: \n");
    scanf("%d", &umur );

    // Block if jika umur lebih besar dari 11 maka dapat divaksin
    if ( umur >= 6)
        printf("Umur Anda sudah 6 tahun ke atas. Anda dapat divaksin.\n");
        
    // Block else jika kondisi if di atas tidak terpenuhi
    else
        printf("Umur Anda kurang dari 6 tahun. Maaf, Anda tidak dapat divaksin.\n");

    return 0;
}


NO [5]

#include <stdio.h>

int main()
{
	// Mendeklarasikan variabel a, b, dan hasil dengan tipe data integer
	int a,b,hasil ;
	
	// Menampilkan output kalimat dan melakukan input nilai
	printf ("Masukkan nilai a : \n"); 
	scanf("%d", &a);
	printf("Masukkan nilai b : \n"); 
	scanf("%d", &b);

    // Melakukan perhitungan dengan operator ternary dan hasilnya akan ditugaskan ke variabel hasil
	hasil  = ((a)>(b)) ? a:b;// Statement akan mengevaluasi kondisi a                        // jika kondisi nilai a lebih kecil dari nilai b

	printf("Dari nilai a dan b yang di-input, nilai yang paling besar adalah : %d\n", hasil);
	
	return 0;
}


NO [6]

#include <stdio.h>

int main()
{
    // Deklarasi variabel platMobil dengan tipe data int
    int platMobil;
   
    // Menampilkan kalimat dan menginput nilai ke variabel platMobil
    printf("Masukkan nomor plat mobil Anda (nomornya saja): \n");
    scanf("%d", &platMobil );
    
    if (platMobil == 1224)
        printf("Plat mobil Anda merupakan nomor genap");
    else
        printf("Plat mobil Anda merupakan nomor ganjil");
    
    return 0;
}



[2.2]

NO [1]

#include <stdio.h>

int main()
{
    // Deklarasi variabel nilai
    int nilai;
    
    // Inisialisasi variabel nilai
    nilai = 80;
    
    if (nilai <= 80)
    {
        printf("Nilai Anda B\n");
    }
    return 0; // Membalikan nilai
}


NO [2]

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Mendeklarasikan variabel hasil1 dan hasil2 dengan tipe data boolean pada satu baris
    int hasil1, hasil2;

    printf("Hasil 1 merupakan benar (true) \ndan 0 merupakan salah (false)\n");

    hasil1 = 10 > 2; // Variabel hasil1 akan ditugaskan dengan hasil evaluasi ekspresi benar
    printf("Hasil1 10 > 2 = %d\n", hasil1 );

    hasil2 = -5 > 3;// Variabel hasil2 akan ditugaskan dengan hasil evaluasi ekspresi salah
    printf("Hasil2 -5 > 3 = %d\n", hasil2);

    return 0;
}


NO [3]

#include <stdio.h>

int main()
{
	// Mendeklarasikan variabel
	float hargaPaket1, hargaPaket2, hargaPaket3, kuantitas, diskon, totalBayar;
	int menu;
	
	// Menginisialisasi variabel
	hargaPaket1 = 20000;
	hargaPaket2 = 25000;
	hargaPaket3 = 30000;
	diskon = 0.06;

    // Mencetak kalimat output dan input nilai ke variabel menu
	printf("1. Paket 1: nasi + ayam + air putih\n");
	printf("2. Paket 2: nasi + ayam + es teh manis\n");
	printf("3. Paket 3: nasi + ayam + tahu tempe + eh teh manis\n");
	printf("Masukkan menu yang ingin Anda pesan [1 - 3]: \n");
	scanf("%d", &menu );
	printf("\n");

    // Menggunakan block statement if jika menu 1 yang dipilih
	if (menu == 1)
	{
		printf("Menu yang Anda pesan Paket 1: nasi + ayam + air putih\n");
		printf("Berapa jumlah paket yang dipesan? ");
		scanf("%f", &kuantitas);

		if (kuantitas >=3) // Memilih menu 1 dan jika paket yang dipesan 3 atau lebih
		{
			printf("\nTotal pembelian kamu adalah %.f paket. Kamu berhak mendapat diskon sebanyak 6 persen!\n", kuantitas );
			totalBayar = (kuantitas * hargaPaket1)-(kuantitas * hargaPaket1 * diskon);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}

		if (kuantitas < 3) // Memilih menu 1 dan jika paket yang dipesan kurang dari 3 
		{
			printf("\nTotal pembelian kamu adalah %.f paket.\n", kuantitas);
			totalBayar = (kuantitas * hargaPaket1);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}

	}
    // Menggunakan block statement else-if jika menu 2 yang dipilih
	if (menu ==2)
	{
		printf("Menu yang Anda pesan Paket 2: nasi + ayam + es teh manis\n");
		printf("Berapa jumlah paket yang dipesan? ");
		scanf("%f", &kuantitas);

	    if (kuantitas >= 3) // Memilih menu 2 dan jika paket yang dipesan 3 atau lebih
		{
			printf("\nTotal pembelian kamu adalah %.f paket. Kamu berhak mendapat diskon sebanyak 6 persen!\n", kuantitas );
			totalBayar = (kuantitas * hargaPaket2) - (kuantitas * hargaPaket2 * diskon);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}

		if (kuantitas < 3) // Memilih menu 2 dan jika paket yang dipesan kurang dari 3
		{
			printf("\nTotal pembelian kamu adalah %.f paket.\n", kuantitas);
			totalBayar = (kuantitas * hargaPaket2);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}

	}
	// Menggunakan block statement else-if jika menu 3 yang dipilih
	if (menu == 3)
	{
		printf("Menu yang Anda pesan Paket 3: nasi + ayam + tahu tempe + es teh manis\n");
		printf("Berapa jumlah paket yang dipesan? ");
		scanf("%f", &kuantitas);

		if (kuantitas >= 3) //Memilih menu 3 dan jika paket yang dipesan 3 atau lebih
		{
			printf("\nTotal pembelian kamu adalah %.f paket. Kamu berhak mendapat diskon sebanyak 6 persen!\n", kuantitas );
			totalBayar = (kuantitas * hargaPaket3)-(kuantitas * hargaPaket3 * diskon);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}

		if (kuantitas < 3) // Memilih menu 3 dan jika paket yang dipesan kurang dari 3
		{
			printf("\nTotal pembelian kamu adalah %.f paket.\n", kuantitas);
			totalBayar = (kuantitas * hargaPaket3);
			printf("Total yang harus kamu bayar adalah : Rp. %.2f,-\n", totalBayar);
		}
	}
}


NO [4]

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Mendeklarasikan variabel hasil1 dan hasil2 dengan tipe data boolean pada satu baris
    bool hasil1, hasil2;

    printf("Hasil 1 merupakan benar (true) \ndan 0 merupakan salah (false)\n");

    hasil1 = 10 > 2; // Variabel hasil1 akan ditugaskan dengan hasil evaluasi ekspresi benar
    printf("Hasil1 10 > 2 = %d\n", hasil1 );

    hasil2 = -5>3; // Variabel hasil2 akan ditugaskan dengan hasil evaluasi ekspresi salah
    printf("Hasil2 -5 > 3 = %d\n", hasil2);

    return 0;
}


{2.5}

NO  [1]

#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel angka dengan tipe data int
    int angka;
    
    // Mencetak output kalimat dan input ke variabel angka
    printf("MENU MAKANAN \n");
    printf("1. Nasi + ayam + es teh manis \n");
    printf("2. Nasi + ayam + tempe + es teh manis \n");
    printf("3. Nasi + ayam + tempe tahu + es jeruk peras \n\n");
    printf("Masukkan nomor menu (1-3) = \n");
    scanf("%d", &angka);
    
    // Perulangan switch dengan dua buah case
    switch (angka)
    {
        case 1: // case akan dijalankan jika nomor yang di-input adalah 1
        printf("Menu 1: Nasi + ayam + es teh manis \n");
        printf("Harga: Rp. 20.000 \n");
        break;
        case 2: // case akan dijalankan jika nomor yang di-input adalah 2
        printf("Menu 2: Nasi + ayam + tempe + es teh manis \n");
        printf("Harga: Rp. 25.000 \n");
        break;
        case 3: // case akan dijalankan jika nomor yang di-input adalah 3
        printf("Menu 3: Nasi + ayam + tempe tahu + es jeruk peras \n");
        printf("Harga: Rp. 30.000 \n");
        break;    
        case 4: // default akan dijalankan jika nomor yang di-input selain 1 dan 2
        printf("Maaf format nomor menu tidak sesuai \n");
    } // Akhir switch
    
    return 0;
}


NO [2]

#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel operator dengan tipe data int
   int oprAritmatika;
    
    // Mencetak output kalimat dan input ke variabel angka
    printf("Operator Aritmatika \n");
    printf("1. Penjumahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian \n");
    printf("4. Pembagian \n\n");
    printf("Masukkan nomor menu (1-4) = \n");
    scanf("%d", &oprAritmatika);
    
    // Perulangan switch dengan empat buah case
    switch (oprAritmatika)
    {
        case 1: // case akan dijalankan jika nomor yang di-input adalah 1
        printf("Contoh penggunaan operator penjumalahan \n");
        printf("x = 1 + 2; \n");
        break;
        case 2: // case akan dijalankan jika nomor yang di-input adalah 2
        printf("Contoh penggunaan operator pengurangan \n");
        printf("x = 1 - 2; \n");
        break;
        case 3: // case akan dijalankan jika nomor yang di-input adalah 3
        printf("Contoh penggunaan operator perkalian \n");
        printf("x = 1 * 2; \n");
        break;  
        case 4: // case akan dijalankan jika nomor yang di-input adalah 3
        printf("Contoh penggunaan operator pembagian \n");
        printf("x = 1 / 2; \n");
        break; 
    default: // default akan dijalankan jika nomor yang di-input selain 1, 2, 3, 4, dan 5
        printf("Maaf format nomor menu tidak sesuai \n");
    } // Akhir switch
    
    return 0;
}


LAB ACTIVITY 2

NO [1]

#include <stdio.h>

int main()
{
    // Deklarasi dan inisialisasi variabel nilai
    int nilai;
    nilai = 60;
    
    // Statement if untuk kondisi nilai lebih besar atau sama dengan 80
    if(nilai >= 80) 
    {
        printf("Nilai Anda baik\n"); // Statement printf untuk mencetak output jika kondisi benar
    }
    else
    {
        printf("Nilai Anda kurang baik");// Statement printf untuk mencetak output jika kondisi salah
    }
    
    return 0;
} 



NO [2]


#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel angka dengan tipe data int
    int angka;
    
    // Mencetak output kalimat dan input ke variabel angka
    printf("Masukkan nomor menu (1-2) = \n");
    scanf("%d", &angka);
    
    // Perulangan switch dengan parameter variabel angka
    switch (angka)
    {
    case 1: // case akan dijalankan jika nomor yang di-input adalah 1
        printf("Menu 1: Nasi + ayam + tempe + es teh manis \n");
        printf("Harga: Rp. 25.000 \n");
        break;
    case 2: // case akan dijalankan jika nomor yang di-input adalah 2
        printf("Menu 2: Nasi + ayam + es teh manis \n");
        printf("Harga: Rp. 20.000 \n");
        break;
    default: // default akan dijalankan jika nomor yang di-input selain 1 dan 2
        printf("Maaf format nomor menu tidak sesuai \n");
    } // Akhir switch
    
    return 0;
}
