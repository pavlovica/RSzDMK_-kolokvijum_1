/**
 * @file	main.c
 * @brief	Glavna funkcija
 * @author	Andrea Pavlovic
 * @date    05-16-2021
 */

#include <arrayss.c>

int main()
{
	int16_t array[];
	int16_t n;
	int16_t difference;
	int16_t element;
	int16_t first_element;
	int16_t sum_it;
	int16_t sum_for;

	usartInit(9600);

	while(1)
	{
		usartPutString_P(PSTR("Prvi element: \r\n"));
		while(!usartAvailable());
		//kasnjenje
		_delay_ms(50);
		//prijem prvog clana
		usartGetString(first_element);
		//kasnjenje
		_delay_ms(50);

		usartPutString_P(PSTR("Razlika: \r\n"));
		while(!usartAvailable());
		//kasnjenje
		_delay_ms(50);
		//prijem razlike
		usartGetString(difference);

		usartPutString_P(PSTR("n-ti element: \r\n"));
		while(!usartAvailable());
		//kasnjenje
		_delay_ms(50);
		//prijem n-tog elementa
		usartGetString(n);
		//kasnjenje
		_delay_ms(50);

		element = Element(first_element, difference, n);
		_delay_ms(50);//kasnjenje

		sum_it = Sum(first_element, difference, n, ITERATIVE);
		sum_for= Sum(first_element, difference, n, FORMULA);


	}

	return 0;

}
