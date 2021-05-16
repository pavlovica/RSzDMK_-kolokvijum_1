/**
 * @file	arrayss.c
 * @brief	C fajl koji sadrzi definicije funkcija
 * @author	Andrea Pavlovic
 * @date    05-16-2021
 */

#include <arrays.h>



int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{
	int16_t array[];

	array[n] = array[first_element] + (n-1)*difference;

	return array[n];

}

void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t  mode)
{

	#define mode ITERATIVE FORMULA
	int16_t sum;
	int16_t array[];

	if (mode == 'ITERATIVE')
	{
		for (int16_t i=0;i<n;i++)
		{
			sum = array[i] + array[i+1];
		}
	if (mode == 'FORMULA')
		{
			sum = ((2*array[first_element] + (n-1)*difference)*n)/2;
		}
	}
}
