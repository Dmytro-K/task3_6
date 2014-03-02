#include "task3_6_funcs.h"

void Sort( double *arr, size_t count )
{
	double tmp;
	size_t i;
	bool k;

	if( arr == NULL || count < 2 )
	{
		return;
	}
	
	do
	{
		k = false;
		for( i = 0; i < count - 1; i++ )
		{
			if( arr[i] > arr[i + 1] )
			{
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				k = true;
			}
		}
	} while( k );
}