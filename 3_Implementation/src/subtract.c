#include "matrix_operations.h"

/**
 * @brief A function to subtract 2 matrices
 * 
 * @param matrix1 
 * @param matrix2 
 * @param n 
 * @return error_t 
 */
error_t subtract_matrices(float **matrix1,float **matrix2, int n){
    int i,j;
    float **result;
    result = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        result[i] = (float *)calloc(n,sizeof(float));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The difference of the matrices is: \n");
    output_matrix(result,n);
    free(result);
    return SUCCESS;
}
