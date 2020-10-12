#include <stdio.h>
#include<math.h>
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
 * Returns norm of two vectors
 */
float normVec(float* aVec, float* bVec, unsigned int vecSize)
{
    float norm = 0;
    for(unsigned int i=0;i<vecSize;i++)
    {
        norm+=pow(aVec[i]-bVec[i],2);
    }
    return sqrt(norm);
}


/*
 * returns dot product
 */
float dotProductVec(float* aVec, float* bVec, unsigned int vecSize);


/*
 * returns the angle between the two vectors
 */
float angleVec(float* aVec, float* bVec, unsigned int vecSize);

