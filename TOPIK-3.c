# ILAB-Teknik-Pemrograman-Terstruktur-1
Semangat


Prelab 3.1

NO[1]

#include<stdio.h>

int main()
{
    // Deklarasi variabel a, b, dan c dengan tipe data int
    int a,b,c;
    a = 15;     // Menugaskan a dengan nilai 15
    b = 5;             // Menugaskan b dengan nilai 5
    c = a+b; // Hitung variabel c dengan a ditambah dengan b
    
    a =  1 + a; // Post-increment variabel a
    // Sekarang nilai variabel a adalah 16
    printf("Setelah post-increment, a = %d\n", a); 
     
    b = -1 + b;     // Post-decrement variabel b
    // Sekarang nilai variabel b adalah 4
    printf("Setelah post-decrement, b = %d\n", b); 
    b = b+1;    // Post-increment variabel b, sekrang nilai variabel b adalah 5
     
    // Variabel c ditugaskan kembali dengan a + b, sehingga 16 + 5
    c = a + b; 
    
    // Mencetak kalimat dan memanggil variabel c
    printf("Nilai a + b = %d\n", c);

    return 0;
}


No {2}

#include <stdio.h>

int main()
{
    // Deklarasi variabel num1, num2, dan result bertipe integer
    int num1,num2,result;
    
    // Menugaskan num1 dengan 0
    num1 = 0;
    // Menugaskan num2 dengan 10
    num2 = 10;
    
    // Menugaskan result dengan hasil evaluasi num2 ditambah num1 pre-increment
    result= num2 + ++num1;

    // Mencetak hasil
    printf("hasil dari result adalah ""%d",result);

    return 0;
}



Prelab 3.2

No {1}

#include <stdio.h>

int main()
{
  int bil = 2 ; // Deklarasi dan inisialisasi variabel bil
  while (bil <= 16) // Buat kondisi pada perulangan while bahwa bil <= 16
  {
    printf("%d\n",bil); // Mencetak nilai bil

    bil = bil + 2 ; // Statement increment bil + 2
  } 

  return 0;
  
}


Prelab 3.3

No {1}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarasi variabel y bertipe integer
    int y;
    
    // Deklarasi statement for sesuai kebutuhan 
    for (y=2; y<=17; y+=3)
    {
        printf("%d"", ",y);

    }  
    return 0;
}


No {2}

#include <stdio.h>
int main()
{
    // Deklarasi variabel alphabet bertipe karakter
    char alphabet;

    /*
    Perulangan for dengan ekspresi pertama menugaskan variabel alphabet dengan A,
    ekspresi kedua menyeleksi kondisi variabel alphabet kurang dari K,
    ekspresi ketiga variabel alphabet increment
    */
    for (alphabet = 'A'; alphabet < 'K'; alphabet++)

  	    // Mencetak nilai variabel alphabet
  	    printf("%c"" ",alphabet);
  	
    return 0;
}


Activity

No {1}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarasi variabel a, b, dan c bertipe integer
    int a,b,c;

    // Menugaskan variabel a dengan sepuluh
    a = 10;

    /* 
    Statement for pertama menugaskan b dengan a,
    menyeleksi kondisi b lebih dari sama dengan satu,
    b decrement 
    */
    for(b=a; b >=1;b--)
    {

        /* 
        Statement for kedua (nested for) menugaskan c dengan 1
        menyeleksi kondisi c kurang dari sama dengan b,
        c increment 
        */
        for (c=1; c <= b ; c++)
        {
            // Mencetak simbol asterik
            printf("*");
        }

    // Mencetak baris baru
    printf("\n");
    }

    return 0;
}



NO {2}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarasi variabel hasil, a, dan i bertipe integer
    int a,i,hasil;

    // Menugaskan hasil dengan satu

    // Mencetak kalimat input bilangan
    printf("Input bilangan: ");

    // Membaca input dari keyborad dan tugaskan pada variabel a
    scanf("%d", &a);
    hasil = 1;
    /* 
    Statement for dengan menugaskan i dengan 1,
    seleksi kondisi i kurang dari sama dengan a,
    i increment 
    */
    for(i=1; i <=a; i++)
    {
        hasil = hasil * i;
        
    }
    printf("\nfaktorial dari %d! adalah %d",a,hasil);
        // Mencetak hasil
        
    return 0;
} 

