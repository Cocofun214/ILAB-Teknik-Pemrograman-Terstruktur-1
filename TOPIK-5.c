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


