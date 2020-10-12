#include <stdio.h>

/*
 * Stores the sum in destVec
 * returns 1 on success, 0 on error
 */
int sumVec(float* aVec, float* bVec, float* destVec, unsigned int vecSize);


/*
 * Stores the elementwise product in destVec
 * returns 1 on success, 0 on error
 */
int productVec(float* aVec, float* bVec, float* destVec, unsigned int vecSize);


/*
 * Stores the difference in destVec
 * returns 1 on success, 0 on error
 */
int diffVec(float* aVec, float* bVec, float* destVec, unsigned int vecSize);


/*
 * returns dot product
 */
float dotProductVec(float* aVec, float* bVec, unsigned int vecSize);


/*
 * returns the angle between the two vectors
 */
float angleVec(float* aVec, float* bVec, unsigned int vecSize);

