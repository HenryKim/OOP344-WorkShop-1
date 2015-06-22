/*OOP344 WORKSHOP 1 -Macros 
w1_macro.cpp
This Program written By
Hyungi Henry Kim
Student ID: 025 741 125
myseneca ID: hkim142
OOP344 A Winter 2014
to Prof. Kamal-Al-Deen, Hasan*/
#include <iostream>
#include <ctime>
using namespace std;
#define swap_i(x,y){\
	clock_t t1,t2;\
	int temp,i=0;\
	double elapTime;\
	t1=clock();\
	while(i<1000000000){\
	temp = x;\
	x = y;\
	y = temp;\
	i++;}\
	t2=clock();\
	elapTime = ((double)(t2-t1)/CLOCKS_PER_SEC);\
	cout<<"Process time for ints is "<<elapTime<<" secs"<<endl;\
}
#define swap_d(x,y){\
	clock_t t1,t2;\
	int i=0;\
	double temp,elapTime;\
	t1=clock();\
	while(i<1000000000){\
	temp = x;\
	x = y;\
	y = temp;\
	i++;}\
	t2=clock();\
	elapTime = ((double)(t2-t1)/CLOCKS_PER_SEC);\
	cout<<"Process time for ints is "<<elapTime<<" secs"<<endl;\
}

int main()
{
	int x=1,y=2;
	char temp;
	double xi=1.0,yi=2.0;
	swap_i(x,y);
	swap_d(xi,yi);
	return 0;
}
