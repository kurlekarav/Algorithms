#include"sort.h"

class quickSort: public sort
{
public:
	quickSort();
	~quickSort();
	void sortArray(int a[], int length);

private:
	int partition(int a[], int low, int high);
	void swap(int* a, int* b);
	void runQuickSort(int a[], int low, int high);
};

