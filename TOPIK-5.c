Prelab 5.1

No[1]

#include <stdio.h>

int main()
{
  printf("Nama\t\tNilai\n");
  char *nilaiMhs[3][2] =
  {
    {"Bella", "A"},
    {"Siska", "B"},
    {"Fajar", "A"}
  };

  // Tampilkan nilai mahasiswa
  int i, j;
  for (i = 0; i < 3; i++) // Statement untuk iterasi baris (i)
  {
      for (j = 0; j < 2; j++ ) // Statement untuk iterasi kolom (j)
        
        // Mencetak nilai dari variabel nilaiMhs
        printf("%s\t\t",nilaiMhs[i][j]);
    printf("\n");
  }

  return 0;
  
}

===============
Prelab 5.2

No[1]

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Mendeklarasikan string s2 dan beri variabel yang sesuai
    char s2[] = "jiLl";
    
    // Menugaskan string s2 dengan fungsi toupper disertai dengan variabel yang sesuai
    
    
    // Mencetak string s2
    printf("%s\n", s2);
    return 0;
    
}

---------------
No[2]

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Mendeklarasikan string s2 dan beri variabel yang sesuai
    char s2[] = "denis";
    
    // Menugaskan string s2 dengan fungsi toupper disertai dengan variabel yang sesuai
    
    
    // Mencetak string s2
    printf("%s\n", s2);
    return 0;
    
}


===============
  
  #include <stdio.h>
#include <ctype.h>

int main()
{
    // Mendeklarasikan string nama dan beri variabel yang sesuai
    char nama[] = "Denis";

    // Menugaskan string nama dengan fungsi lower disertai dengan variabel yang sesuai
    for (int i = 0; nama[i]; i++)
        nama[i] = tolower(nama[i]);

    // Mencetak string nama
    printf("%s\n", nama);
    return 0;
}

==============
  
  #include <stdio.h>
int main()
{
    // Deklarasi string movie dan beri batasan 14 karakter pada string tersebut
    char x[] = "Jack and jill";
    // Mencetak string movie
    printf("%s\n", x);
    return 0;
}

===============
  
  #include <stdio.h>

int main() {
  /* Deklarasi variabel array matriks1 dengan 2 baris dan 2 kolom, 
  matriks2 dengan 2 baris 1 kolom, dan hasil dengan 2 baris 1 kolom*/
  int matriks1[2][2], matriks2[2][1], hasil[2][1];
  // Deklarasi variabel i, j, k dan jumlah, serta menugaskan variabel jumlah dengan nilai 0
  int i, j, k, jumlah = 0;

    printf("Masukkan elemen matriks pertama: \n");
    // Iterasi untuk baris (i) pada matriks pertama
    for(i = 0; i < 2; i++){
      // Iterasi untuk kolom (j) pada matriks pertama
      for(j = 0; j < 2; j++){
        scanf("%d", &matriks1[i][j]);
      }
    }

    printf("Masukkan elemen matriks kedua: \n");
    // Iterasi untuk baris (i) pada matriks kedua
    for(i = 0; i < 2; i++){
      // Iterasi untuk kolom (j) pada matriks kedua
      for(j = 0; j < 1; j++){
        scanf("%d", &matriks2[i][j]);
      }
    }

    for(i = 0; i < 2; i++){ // Iterasi untuk mencetak baris matriks hasil
      for(j = 0; j < 1; j++){ // Iterasi untuk mencetak kolom matriks hasil
        for(k = 0; k < 2; k++){ // Iterasi untuk mencetak ada berapa matriks yang akan dicetak
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        /* inisialisasi variabel array hasil diikuti 
        dengan indeks pertamanya adalah i dan indeks keduanya adalah j 
        serta dengan menggunakan operator assignment ditugaskan ekspresi jumlah*/
        hasil[i][j] += jumlah; 
        jumlah = 0;
      }
    }

    printf("Hasil perkalian matriks: \n");
    for(i = 0; i < 2; i++){
      for(j = 0; j < 1; j++){
        printf("%d", hasil[i][j]);
      }
      printf("\n");
    }


  return 0;
}


================
  
#include <stdio.h>

int main()
{
  char *data_mhs[2][3][3]=
  {
    {{"Atika","Ferdi", "Budi"},
     {"Kayla", "Jesica", "Michael"},
     {"Andrean", "Karina", "Julian"}},
    {{"Layla","Farida", "Meily"},
     {"Firman", "Anita", "Gita"},
     {"Jonathan", "Lola", "Fikri"}}

  };
// Tampilkan data mahasiswa
  int i, j, k;
  printf ("Data peserta lolos seleksi asisten :\n");
  // Iterasi indeks kesatu (i)
  for (i = 0; i < 2; i++)
     // Iterasi indeks kedua (j)
     for (j = 0; j < 3;  j++)
        // Iterasi indeks ketiga (k)
        for (k = 0; k < 3;  k++)
        {
            // Kondisi ekspresi percabangan untuk menampilkan data Karina
            if (i == 0 && j == 2 && k ==1 ) 
            // Mencetak nama Karina jika kondisi terpenuhi
            printf("Hari ke-%d | Sesi ke-%d = %s\n", i+1,j+1,data_mhs[i][j][k]);


        }

  return 0;

}
