#include<iostream>
#include<string>

#include"cmdArgHelper.h"

bool cmdArgHelper::cmdArgToIntArrayConverter(int argc, char* a[], int arr[])
{
	for (int i=0; i<argc-1; i++)
	{
		arr[i] = std::stoi(a[i+1]);
	}
	return true;
}
