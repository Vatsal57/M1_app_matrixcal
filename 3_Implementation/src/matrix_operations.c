/**
 * @file matrix_operations.c
 * @author Vatsal Pande (vatsalpande711@gmail.com)
 * @brief  This is the source code which contains all the functions for the project
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "matrix_operations.h"


/**
 * @brief This function frees the dynamically allocated memory in the structure
 * 
 * @param m 
 */
void free_matrix_structure(mat *m){
    free(m->matrix_1);
    free(m->matrix_2);
}

/**
 * @brief A function to dynamically allocate the memory for the matrix
 * 
 * @param matrix 
 * @param n 
 */
void dynamic_alloc_mat(float **matrix,int n){
    matrix = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        matrix[i] = (float *)calloc(n,sizeof(float));
    }
}

/**
 * @brief A function to allocate memory and input the matrix elements
 * 
 * @param matrix 
 * @param n 
 * @return float** 
 */
float ** alloc_input_matrix(float **matrix,int n){
    int i,j;
    matrix = (float **)calloc(n,sizeof(float));
    for(i=0;i<n;i++){
        matrix[i] = (float *)calloc(n,sizeof(float));
    }

    float element;
    printf("Enter the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &element);
            matrix[i][j]= element;
        }
    }
    return matrix;
}

/**
 * @brief A function to output the matrix
 * 
 * @param matrix 
 * @param n 
 */

void output_matrix(float **matrix,int n){
    int i,j;
    float x;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            //x = **(matrix + i*n + j);
            printf("%5.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
}

/**
 * @brief A function to find the power of (-1)
 * 
 * @param exp 
 * @return float 
 */
float power(int exp){
    float result=1;
    while(exp != 0){
        result*=(-1);
        exp--;
    }
    return result;

}