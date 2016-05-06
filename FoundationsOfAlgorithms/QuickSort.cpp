#include <iostream>
using namespace std;
int Partition(int A[], int Start, int End, int PivotPiont)
{
	int i, j;

	return(i);
}
void QuickSort(int A[], int iStart, int iEnd)
{
	if (iStart < iEnd)
	{
		int iPivotPiont = iStart;
		iPivotPiont = Partition(A, iStart, iEnd, iPivotPiont);
		QuickSort(A, iStart, iPivotPiont - 1);
		QuickSort(A, iPivotPiont + 1, iEnd);
	}
}
int Main()
{
	int iA[] = { 15 };
	return 0;
}