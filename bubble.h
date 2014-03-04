#include <stdio.h>


void sort_bubble ( int* mass, int n )
{
	bool fl;
	int i, buff;
	fl = true;
	while (fl)
	{
		fl = false;
		for ( i = 0; i < n-1; i++)
			if ( mass[i] < mass[i + 1])
			{
				buff = mass[i];
				mass[i] = mass[i + 1];
				mass[i + 1] = buff;
				fl = true;
			}
	}
}

