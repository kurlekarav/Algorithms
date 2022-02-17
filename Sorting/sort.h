#include<iostream>

class sort
{
public:
sort()
{std::cout<<"in sort Ctor"<<std::endl;}

~sort()
{std::cout<<"in sort DTor"<<std::endl;}


virtual void sortArray(int a[], int length)
{
	std::cout<<"this is base class sort array function"<<std::endl;
}

void printArray(int a[], int length)
{
	std::cout<<"in printarray base class"<<std::endl;
	
	for (int i=0; i<length; i++)
	{
		std::cout<<" "<<a[i];
	}
	std::cout<<std::endl;
}

};

