#include "task3_6_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
	double **arr;
	size_t h, w, i, j;

	srand( time( NULL ) );
	rand();
	h = rand() % 10 + 1;
	w = rand() % 10 + 1;

	arr = (double**)malloc( h*sizeof( double* ) );
	arr[0] = (double*)malloc( h*w*sizeof( double ) );

	for( i = 1; i < h; i++ )
	{
		arr[i] = arr[0] + w * i;
	}

	for( i = 0; i < h; i++ )
	{
		for( j = 0; j < w; j++ )
		{
			arr[i][j] = (double)( rand() % 1000 ) + (double)( rand() % 1000 ) / 1000;
		}
	}

	puts( "Original maxtrix:" );
	for( i = 0; i < h; i++ )
	{
		for( j = 0; j < w; j++ )
		{
			printf( "%7.3lf ", arr[i][j] );
		}
		putchar( '\n' );
	}

	for( i = 0; i < h; i++ )
	{
		Sort( arr[i], w );
	}

	puts( "\nSorted maxtrix:" );
	for( i = 0; i < h; i++ )
	{
		for( j = 0; j < w; j++ )
		{
			printf( "%7.3lf ", arr[i][j] );
		}
		putchar( '\n' );
	}

	free( arr[0] );
	free( arr );

	return 0;
}