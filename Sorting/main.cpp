#include<iostream>
#include"quickSort.h"
#include "cmdArgHelper.h"

int main(int argc, char* argv[])
{
	quickSort quickSortHandler;
	cmdArgHelper helper;
	sort* sortHandler = &quickSortHandler;

	int a[argc-1];
	int arrLength = argc-1;
	//int arrLength = sizeof(a)/sizeof(a[0]);

	helper.cmdArgToIntArrayConverter(argc, argv, a);

	//std::cout<<"arr length is "<<arrLength<<std::endl;
	sortHandler->sortArray(a, arrLength);

	
	return 0;
}
