#include "LinearSearch.h"


int LinearSearch(int a[], int n, int key)
{
	for (int i = 0; i <= n; ++i)
	{
		if (a[i] == key)
		{
			return i;
		}
		else
			return -1;
	}
}