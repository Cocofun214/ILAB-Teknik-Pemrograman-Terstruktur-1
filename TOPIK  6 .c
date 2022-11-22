--------- Prelab 6.1 ------------

* //Nama tipe struktur disebut juga sebagai apa

-- Tag struct --

* //Struct merupakan kumpulan variabel yang terkait di dalam satu nama struct mengelompokkan data dengan tipe yang sama
  
  -- Benar --
  
 * //Anggota sturct hanya berisikan variabel dengan tipe data yang sama
  
  -- Salah --
  
  * //Apakah Keyword yang digunakan untuk deklarasi Struct?
  
  -- struct --
    
   * Codingan data_pegawai

// Program data_pegawai.c
#include <stdio.h>
#include <string.h>

int main()
{
  struct pegawai
  {
    char fname[10];
    char lname[10];
    int id;
    float gaji;
  };
  struct pegawai pgw;
  strcpy(pgw.fname, "Michael");
  strcpy(pgw.lname, "Budi");
  pgw.id = 1234;
  pgw.gaji = 1000000;
  printf("Nama depan: %s\n", pgw.fname);
  printf("Nama belakang: %s\n", pgw.lname);
  printf("ID Pegawai: %d\n", pgw.id);
  printf("Gaji : Rp.%.2f\n", pgw.gaji);
  return 0;

}



----------- Prelab 6.2 -------------
  
  * /*Pada program diatas,manakah yang termasuk ke dalam*/ Variabel union?
    
    -- i --
    
  * //Keyword apa yang digunakan untuk mengelompokkan variabel bertipe sama ataupun berbeda di mana variabel" tersebut saling berbagi memori?
    
    -- union --
      
  * //Dua union dapat dibandingkan dengan symbol (==) untuk membuktikan bahwa kedua union tersebut sama.
      
      -- Salah --
      
   * //
      
      -- Union hanya bisa menginisialisasi variabel atau memberikan nilai terhadap union apabila seluruh tipe data yang ada di dalam union adalah sama --
        
   * //
        
        -- Suatu tipe yang menampung beberapa variabel bertipe data sama ataupun bertipe data beda yang dimana variabel yang satu dengan yang lainnya berada di dalam alamat memori yang sama --

        
  ============= Kumpulan Codingan Prelab 6.2 ==============
        
    -- 1 --

#include <stdio.h>

int main()
{
    // Deklarasi union dengan nama union elemenPersegi
    union elemenPersegi
    {
        int sisi1;
        int sisi2;
    };


    // Deklarasi nama union dengan variabel union Persegi dan menugaskannya dengan nilai {6}
    union elemenPersegi Persegi ;
    Persegi.sisi1 = 6;// Angka 6 secara otomatis masuk ke dalam variabel sisi1

    // Inisialisasi nama union elemenPersegi dengan variabel pointer ptr dan menugaskannya dengan nilai &Persegi
    union elemenPersegi *ptr;
    ptr= &Persegi;
       // Inisialisasi variabel LuasPersegi
       // Dan menugaskannya dengan nilai sisi1 * sisi2 dengan menggunakan pointer
    int LuasPersegi = ptr->sisi1 * ptr->sisi2;

       // Mencetak nilai LuasPersegi
    printf("Luas Persegi adalah = %d\n",LuasPersegi);

    return 0;

}

-- 2--
 
#include <stdio.h>

// Deklarasi tipe union dengan nama union bilangan
union bilangan
{
    int x;
    double y;
};

int main()
{
    union bilangan nilai; // Deklarasi nama union dengan variabel union nilai
    nilai.x = 50; // Menginisialisasi variabel x untuk ditugaskan dengan nilai 50

    printf("Mencetak nilai dari variabel-variabel di dalam union:\n"); 
    // Mencetak nilai x
    printf("Nilai variabel x = %d\n",nilai.x);
    // Mencetak nilai y
    printf("Nilai variabel y = %f\n",nilai.y);

    return 0;

}


-- 3 --
  
#include <stdio.h>

int main()
{
    // Deklarasi tipe union dengan nama random
    union random
    {
        int a;
        int b;
    };

    // Deklarasi nama union random dengan nama variabel bilangan dan menugaskannya dengan nilai 10
    union random bilangan ;
    bilangan.a = 10;

    // Inisialisasi nama union random dengan variabel pointer ptr dan menugaskannya dengan nilai &bilangan
    union randomptr  ;
    ptr = &bilangan;

    // Mencetak nilai a dengan pointer
    printf("a = %d\n", ptr->b);

    // Mengubah nilai b dengan pointer
    ptr->b = 30;
    // Mencetak nilai a dengan pointer
    printf("a = %d\n", ptr->b);

    return 0;

}
  
  
  ----------------- Prelab 6.3 ------------------
        
    * //Apakah output yang dihasilkan program di atas?
        
        -- January, August, December --
     
    * //Jika statement tersebut dijalankan, apakah output yang dihasilkan?
        
        -- 0,2,dan 1 --
        
     * //Apakah output yang dihasilkan dari program di atas?
        
        -- 0,1,6 --
        
      * //Berdasarkan enum diatas, maka nilai enum blue yang tersimpan di memori adalah 1.
        
        -- Salah --
        
      * //Apakah output yang dihasilkan dari program diatas?
        
        -- 2,4,5 --
        
      * //
        
        -- 4
           5
           6
           7
           8  --
        
       
        
     ----------------- Prelab 6.4 ----------------
        
      * //Seorang programmer C dapat menggunakan typedef untuk mendefenisikan tipe struct sehingga tag struct tidak diperlukan
        
        -- Benar --
        
      * //Apakah keyword yang digunakan untuk deklarasi typedef?
        
        -- typedef --
        
      * //Dalam pendeklarasian typedef, bentuk penulisannya adalah sebagai berikut
        
        typedef newtypename;
       
       Pilih salah satu :
   
         -- Salah --
           
     * //Dari statement berikut ini, manakah statement yang menunjukkan penggunaan nama alias dari potongan program di atas?
           
           -- st s1,s2; --
      
     * //Apa nama alias yang digunakan pada potongan program diatas?
             
             -- st; --
               
     * //typedef dapat dihunakan untuk membuat nama alias dari sebuah tipe data dasar
               
               -- Benar --
               
     * //Potongan program :
               typedef int age;
 
            //Bagaimana sintaks yang dapat digunakan untuk penggunaan nama alias dari potongan program diatas?
              
              -- age a1,a2; --
     
      
                
                
-------------------------- ACT 6 ------------------
                
// Mencari Keliling Lingkaran
                
#include <stdio.h>
#define PHI 3.14
union lingkaran{
    float keliling;
    float luas;
};
void hit_kll(union lingkaran *lkrn, float r);
void hit_luas(union lingkaran *lkrn, float r);
int main(void){
    float r;
    union lingkaran lk;
    printf("Masukkan panjang jari-jari : ");
    scanf("%f",&r);   
    hit_kll(&lk, r);
    printf("Keliling lingkaran : %.2f\n",lk.keliling);
    hit_luas(&lk, r);
    printf("Luas Lingkaran : %.2f\n",lk.luas);
}
void hit_kll(union lingkaran *lkrn, float r){
    lkrn->keliling = 2 * PHI * r;
}
void hit_luas(union lingkaran *lkrn, float r){
    (*lkrn).luas = PHI * r * r;
} 
                

// Isi Variabel 

#include <stdio.h>
typedef int age;
int main()
{
    age a1;
    age a2;
    a1 = 123456;
    printf("Isi variabel a1: %d \n", a1);
    a2 = 234513;
    printf("Isi variabel a2: %d \n", a2);
    return 0;
}





