#include "matrix_operations.h"

/**
 * @brief A function to find the determinant of a matrix
 * 
 * @param matrix 
 * @param k 
 * @return float 
 */
float determinant(float **matrix,int k)
{

    float s = 1, det = 0, **b;
    b = (float **)calloc(k,sizeof(float));
    for(int ai=0;ai<k;ai++){
        b[ai] = (float *)calloc(k,sizeof(float));
    }
  int i, j, m, n, c;
  if (k == 1)
    {
     return (matrix[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = matrix[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (matrix[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }
    free(b);
    return (det);
    "clear";
}
