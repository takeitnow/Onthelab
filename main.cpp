#include <stdlib.h>
#include <time.h>
#include "bubble.h"
#include "merge.h"

void main()
{
	int* a;
	int n,i;
	srand(time(NULL));
	n = rand() % 500 + 10;
	a = new int[n];
	for ( i = 0; i < n; i++ )
		a[i] = rand() % 1000 - 500;
	sort_bubble( a, n);
//	Merge( a, 0 , n );
	for ( i = 0; i < n; i++ )
		printf("%d\t", a[i]);

	system("pause");
}
	