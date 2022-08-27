// =================================================================
//
// File: activity.h
// Author: Jesus Ramirez Delgado
// Date:26/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
int sumaIterativa(int num){

	int sum = 0;
	for (int i = 1; i <= num; i++){
		sum = sum + i;
	return sum;
	}
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================

int sumaRecursiva(int n)
{
    if (n <= 1)
        return n;
    return n + sumaRecursiva(n - 1);
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================

int sumOfDigitsFrom1ToN(int n)
{
    int result = 0; // initialize result
 
    // One by one compute sum of digits in every number from
    // 1 to n
    for (int x = 1; x <= n; x++)
        result += sumOfDigits(x);
 
    return result;
}

#endif /* ACTIVITY_H */
