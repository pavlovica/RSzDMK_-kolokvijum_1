/**
 * @file	arrays.h
 * @brief	H fajl koji sadrzi deklaracije funkcija
 * @author	Andrea Pavlovic
 * @date    05-16-2021
 */

#ifndef ARRAYS_H_
#define ARRAYS_H_

//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include <usart.h>
//Biblioteka koja sadrzi definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>



/**
 * Element
 * @param first_element - ulaz tipa int16_t - prvi clan niza
 * @param difference - ulaz tipa int16_t - razlika dva clana u aritmetickom nizu
 * @param n - ulaz tipa int16_t - n-ti clan niza
 * @return Povratna vrednost je suma n clanova niza - tipa int16_t
 */
int16_t Element(int16_t first_element, int16_t difference, int16_t n);


/**
 * Sum
 * @param first_element - ulaz tipa int16_t - prvi clan niza
 * @param difference - ulaz tipa int16_t - razlika dva clana u aritmetickom nizu
 * @param n - ulaz tipa int16_t - n-ti clan niza
 * @param mode - mod na osnovu kog odredjujemo sumu n clanova niza
 * @return Povratna vrednost je suma n clanova niza - tipa int16_t
 */
void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t  mode);

#endif /* ARRAYS_H_ */
