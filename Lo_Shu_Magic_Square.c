#include <stdio.h>
#include <string.h>


void squareMaker(int n)
{
   int magicSquare[n][n];

   for(int a = 0; a<n; a++){
       for(int b = 0; b<n; b++){
           magicSquare[a][b] = 0;
       }
   }
   int i = n / 2;
   int j = n - 1;

   for (int num = 1; num <= n * n;) {
       if (i == -1 && j == n) 
       {
           j = n - 2;
           i = 0;
       }
       else {
           if (j == n)
               j = 0;

           if (i < 0)
               i = n - 1;
       }
       if (magicSquare[i][j])
       {
           j -= 2;
           i++;
           continue;
       }
       else
           magicSquare[i][j] = num++;
            j++;
            i--;
   }

   printf("This Lo Shu Magic Square has 9 squares.\n");
   for (i = 0; i < n; i++) {
       for (j = 0; j < n; j++)
           printf("%3d ", magicSquare[i][j]);
       printf("\n");
   }
}

int main()
{
   int x = 3; 
   squareMaker(x);
   return 0;
}