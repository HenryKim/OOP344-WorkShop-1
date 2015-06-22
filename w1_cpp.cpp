/*OOP344 WORKSHOP 1 -Macros 
w1_cpp.cpp
This Program written By
Hyungi Henry Kim
Student ID: 025 741 125
myseneca ID: hkim142
OOP344 A Winter 2014
to Prof. Kamal-Al-Deen, Hasan*/
void swap_i(int, int);
void swap_d(double, double);
#include <iostream>
#include <ctime>
using namespace std;

void swap_i(int x, int y)
{
	clock_t t1,t2;
	double elapTime;
	int temp;
	t1=clock();
	for (int z=0; z<1000000000; z++)
	{
	temp = x;
	x = y;
	y = temp;
	}
	t2=clock();
	elapTime = ((double)(t2-t1)/CLOCKS_PER_SEC);
	cout<<"Process time for ints is "<<elapTime<<" secs"<<endl;
}

void swap_d(double x, double y)
{
	clock_t t1,t2;
	double elapTime,temp;
	t1=clock();
	for (int z=0; z<1000000000; z++)
	{
	temp = x;
	x = y;
	y = temp;
	}
	t2=clock();
	elapTime = ((double)(t2-t1)/CLOCKS_PER_SEC);
	cout<<"Process time for doubles is "<<elapTime<<" secs"<<endl;
}

int main()
{
	char temp;
	swap_i(1,2);
	swap_d(1.0,2.0);
	return 0;
}