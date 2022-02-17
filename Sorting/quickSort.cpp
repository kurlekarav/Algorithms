#include<iostream>
#include"quickSort.h"

quickSort::quickSort()
{
std::cout<<"in quickSort Ctor"<<std::endl;
}

quickSort::~quickSort()
{
std::cout<<"in quickSort DTor"<<std::endl;
}


void quickSort::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b= temp;
}

int quickSort::partition(int a[], int l, int h)
{
	int pivot = a[h];
	int smallIndex = l;
	
	for(int i=l; i<h; i++)
	{
		if (a[i]<pivot)
		{
			swap(&a[i], &a[smallIndex]);
			smallIndex++;
		}	
	}
	swap(&a[smallIndex], &a[h]);
	return smallIndex;
}

void quickSort::runQuickSort(int a[], int l, int h)
{	
	if (l<h)
	{
		int pivotIndex = partition(a, l, h);
		runQuickSort(a, l, pivotIndex-1);
		runQuickSort(a, pivotIndex+1, h);	
	}
}

void quickSort::sortArray(int a[], int length)
{
	sort::printArray(a, length);
	runQuickSort(a, 0, length-1);
	sort::printArray(a, length);
}

