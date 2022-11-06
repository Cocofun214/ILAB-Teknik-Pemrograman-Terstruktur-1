# ILAB-Teknik-Pemrograman-Terstruktur-1
Semangat

Topik 1.1-1.2

NO [1]

// Program mencetak kalimat
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{ // Menandakan awal dari body program
    // Mencetak output
	printf("Welcome\nto C!");
	return 0; // Menentukan nilai balik
}

NO [2]

// Program mencetak kalimat
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{ // Awal dari body program​
    // Mencetak output
	printf("This is C program.\n" ); 
	
	return 0; // Menentukan nilai balik
} // Akhir dari body program



Topik 1.3-1.4

No [1]

// Program menghitung nilai
#include <stdio.h>

int main()
{

    // Mendefinisikan variabel a, b, c, dan d dengan tipe data integer
    int a,b,c,d;
  
    // Menginisialisasi variabel a, b, dan c
    a = 15;
    b = 4;
    c = 7;

    // Melakukan operasi aritmatika yang akan ditugaskan ke variabel d
    d = a % c + b;

    // Mencetak output
    printf("nilai a: %d \n",a);
    printf("nilai b: %d \n",b);
    printf("nilai c: %d \n",c);
    printf( "sisa hasil bagi dari a dibagi c kemudian ditambah b adalah %d", d );
    
    return 0;
}


No [2]

// Program mencetak karakter
#include <stdio.h>

int main()
{
    // Deklarasi variabel Karakter dengan tipe data char
    char karakter;
    
    // Menugaskan variabel Karakter dengan nilai A
    karakter = 'A';
    
    // Mencetak output nilai variabel Karakter ke layar
    printf("Karakter yang disimpan = %c",karakter);

    return 0;
}

No [3]

// Program var.c
#include <stdio.h>

int main()
{
    // Mendefinisikan variabel a, b, x, f, dan y yang bertipe data integer 
    int a,b,x,f,y;
  
    // Menginisialisasikan nilai pada variabel a, b, x, dan y
    a = 5;
    b = 1;
    x = 10;
    y = 5;

    //Melakukan operasi aritmatika pada variabel f 
    f = (a-b)*(x-y);

    //Mencetak nilai variabel f 
    printf("nilai f: %d \n",f);
    
    return 0; 
}


NO [4]


#include <stdio.h>

int main() 
{
    // Mencetak output
    printf("Hallo, mahasiswa Gunadarma\nSelamat datang di Integrated Laboratory");
    
    return 0;// Menentukan nilai balik
}


NO [5]

// Program menggunakan escape sequence
#include <stdio.h>

int main()
{
    // Mencetak output "Buku adalah jendela dunia."
    printf("\"Buku adalah jendela dunia.\"");
    return 0;
}



NO [6]


// Program menggunakan escape sequence
#include <stdio.h>

int main()
{
    // Mencetak output "Buku adalah jendela dunia."
    printf("\"Buku adalah jendela dunia.\"");
    return 0;
}



Topik 1.5

NO [1]
// Program IniString.c
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    // Deklarasi dan inisialisasi variabel character 
	char character  = 'A';
	
	// Mencetak output 
	printf("%c \n", character);
	printf("%s \n","Ini adalah string");
	
    // Deklarasi dan inisialisasi variabel string 
	const char string[] = "Ini juga adalah string";
	
    // Mencetak output
	printf("%s \n", string);
		
}


NO [7]


#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    // Mencetak output nilai positif dan negatif tanpa flag (+)
    printf("786\n");
    // Mencetak output nilai positif dan negatif dengan menggunakan flag (+)
    printf("%-s\n%s\n%-s","-786","+786","-786");
	
} // Mengakhiri fungsi main()
 


LAB ACTIVITY 1

NO [1]

// Program perhitungan aritmatika
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    printf( "Masukkan 3 angka: " ); // Mencetak kalimat

    // Deklarasi variabel x, y, dan z
    int x,y,z; 
    
    // Deklarasi variabel perkalian, penjumlahan, dan pengurangan
    int perkalian, penjumlahan, pengurangan; 
    
    scanf( "%d%d%d",&x,&y,&z); // Membaca input variabel x, y, dan z
    
    // Menghitung nilai perkalian, penjumlahan, dan pengurangan dari variabel x, y, dan z
    perkalian = x*y*z; 
    penjumlahan = x+y+z;
    pengurangan = x-y-z;
    
    // Cetak output dengan memanggil variabel
    printf( "Hasil penjumlahan 3 bilangan: %d\n", penjumlahan); 
    printf( "Hasil perkalian 3 bilangan: %d\n", perkalian); 
    printf( "Hasil pengurangan 3 bilangan: %d", pengurangan); 
    
    return 0;
}


NO [2]

// Program perhitungan penjumlahan angka1 dan angka2
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    printf( "Masukkan 2 angka untuk dihitung: " ); // Mencetak output kalimat

    // Deklarasi variabel angka1 dan angka2
    int angka1, angka2;
    
    // Deklarasi variabel penjumlahan dan pengurangan
    int penjumlahan, pengurangan;
    
    scanf( "%d%d", &angka1, &angka2); // Membaca input variabel angka1 dan angka2
    
    // Menghitung nilai penjumlahan dan pengurangan dari variabel angka1 dan angka2
    penjumlahan = angka1+angka2;
    pengurangan = angka1-angka2;
    
    // Cetak output dengan memanggil variabel
    printf( "Hasil penjumlahan 2 bilangan: %d\n",penjumlahan); // Menampilkan hasil penjumlahan
    printf( "Hasil pengurangan 2 bilangan: %d",pengurangan); // Menampilkan hasil pengurangan
    
    return 0;
} 
