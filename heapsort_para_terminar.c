
/* Heapsort para terminar */

#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
// bool, true, false

#include <iso646.h>
// and, or, not


size_t g_comparaciones = 0;
// ¡No olvides ponerla a cero ANTES de cada llamada al algoritmo!


void print( int* list, size_t tam, char* msg )
{
	printf( "%s", msg );
	for( size_t i = 0; i < tam; ++i ){
		printf( "%d, ", list[ i ] );
	}
	printf( "\n" );
}

void swap( int* val1, int* val2 )
{
}


/**
 * @brief Mantiene el heap.
 *
 * @param list[] Una lista
 * @param n El número total de elementos en la lista
 * @param k El nivel del nodo raíz (0 para el primer nivel, 1, para el segundo
 * nivel, y así sucesivamente.)
 */
void heapify( int list[], size_t n, size_t root )
{
}

/**
 * @brief Convierte una lista de números en un montículo.
 *
 * @param list[] Una lista.
 * @param num_elems El número de elementos totales en la lista.
 *
 * @post El montículo se ve reflejado en la lista original.
 */
void build_max_heap( int list[], size_t num_elems )
{
}

/**
 * @brief Ordena una lista de números utilizando al algoritmo heap sort en forma
 * ascendente.
 *
 * @param list[] Una lista.
 * @param num_elems El número de elementos totales en la lista.
 */
void heap_sort( int list[], size_t num_elems )
{
}

#define NUM_ELEMS 7

int main()
{
	int list[ NUM_ELEMS ] = { 6, 10, 1, 7, 0, 8, 5 };

	print( list, NUM_ELEMS, "  Antes: " );

	heap_sort( list, NUM_ELEMS );

	print( list, NUM_ELEMS, "Después: " );

   //printf( "Realicé %ld comparaciones.\n", g_comparaciones );

}
