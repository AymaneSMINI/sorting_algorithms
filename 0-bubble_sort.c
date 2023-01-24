#include "sort.h"
/**
 * bubble_sort - function
 * @A: array of integers
 * @n: size of table
 * Return: nothing
 */
void bubble_sort(int A[], size_t n)
{
	int temp;
	bool swapped;
	size_t i;
	size_t size = n;

	do {
		swapped = false;
		i = 1;
		while (i < n)
		{
			if (A[i - 1] > A[i])
			{
				temp = A[i - 1];
				A[i - 1] = A[i];
				A[i] = temp;
				swapped = true;
				print_array(A, size);
			}
			i++;
		}
		n--;
	} while (swapped);
}
