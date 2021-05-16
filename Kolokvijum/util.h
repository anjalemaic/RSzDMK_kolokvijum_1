/**
* @file util.h
* @brief Utils
* @author Anja Lemaic
* @date 16-05-2021
* @version 1.0
*/
#ifndef UTIL_H_
#define UTIL_H_
#include <avr/io.h>
#include <stdlib.h>
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <avr/pgmspace.h>
#include "../usart_1/usart_1.h"
#define UP 1
#define DOWN 0
#define TRUE 1
#define FALSE 0

/**
 * Sort - Funkcija Sort treba da sortira niz array dužine array_length
 * @return Nema povratnu vrednost
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
 * Check - Funkcija Check vrši proveru da li je uneti niz aritmetički
 * @return vrednosti TRUE ili FALSE, definisane kao makro konstante za vrednosti 1 i 0.
 */
int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
