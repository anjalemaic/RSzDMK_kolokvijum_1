/**
* @file util.c
* @brief Utils
* @author Anja Lemaic
* @date 16-05-2021
* @version 1.0
*/
#include "util.h"

/**
 * Sort - Funkcija Sort treba da sortira niz array dužine array_length
 * @return Nema povratnu vrednost
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode) {

	char ispis[64];
	if(mode == DOWN) {

		for(int8_t i = 0; i < array_length; i++)
		{
			for(int8_t j = i; j < array_length; j++)
			{

				if(array[i] < array[j]) {
					array[i] = usartGetChar();
					//sprinft(ispis, "%d", array[i]);
					//usartPutString(ispis);

				}


			}

		}

	}
	if (mode == UP) {

		for(int8_t i = 0; i < array_length; i++)
				{
					for(int8_t j = i; j < array_length; j++)
					{

						if(array[i] > array[j]) {
							array[i] = usartGetChar();
							//sprinft(ispis, "%d", array[i]);
							//usartPutString(ispis);

						}
					}

				}

	}

}
/**
 * Check - Funkcija Check vrši proveru da li je uneti niz aritmetički
 * @return vrednosti TRUE ili FALSE, definisane kao makro konstante za vrednosti 1 i 0.
 */
int8_t Check(int16_t *array) {



}
