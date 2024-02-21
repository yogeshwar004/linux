#include <stdio.h>
#define max 25
void main() {
  int frag[max], b[max], f[max], i, j, nb, nf, temp;
  static int bf[max], ff[max];
  printf("\n\tMemory Management Scheme - Worst Fit");
  printf("\nEnter the number of blocks:");
  scanf("%d", &nb);
  printf("Enter the number of files:");
  scanf("%d", &nf);
  printf("\nEnter the size of the blocks:-\n");
  for (i = 1; i <= nb; i++) {
    printf("Block %d:", i);
    scanf("%d", &b[i]);
  }
  printf("Enter the size of the files :-\n");
  for (i = 1; i <= nf; i++) {
    printf("File %d:", i);
    scanf("%d", &f[i]);
  }
  for (i = 1; i <= nf; i++) {
    for (j = 1; j <= nb; j++) {
      if (bf[j] != 1) {
        temp = b[j] - f[i];
        if (temp >= 0) {
          ff[i] = j;
          break;
        }
      }
    }
    frag[i] = temp;
    bf[ff[i]] = 1;
  }
  printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement\n");
  for (i = 1; i <= nf; i++)
    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, f[i], ff[i], b[ff[i]], frag[i]);
}
/*
        Memory Management Scheme - Worst Fit
Enter the number of blocks:3
Enter the number of files:3

Enter the size of the blocks:-
Block 1:20
Block 2:20
Block 3:20
Enter the size of the files :-
File 1:13
File 2:7
File 3:18

File_no:        File_size :     Block_no:       Block_size:     Fragement

1               13              1               20              7

2               7               2               20              13

3               18              3               20              2
*/