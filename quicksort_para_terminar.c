
/* Quicksort para terminar */

#include <stdlib.h>
#include <stdio.h>

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


void quick_sort( int list[], size_t first, size_t last )
{
}


#define NUM_ELEMS 10

int main()
{
	int list[ NUM_ELEMS ] = { 1, 8, 4, 9, 6, 3, 5, 2, 7, 0 };

	print( list, NUM_ELEMS, "Antes: " );

	quick_sort( list, 0, NUM_ELEMS - 1 );

	print( list, NUM_ELEMS, "Después: " );

   //printf( "Se realizaron %ld comparaciones.\n", g_comparaciones );
}

