#include <iostream>
#include <string>
#include "Header1.h"
using namespace std;

int main()
{
	Kalk("Sum = ", sum(6, 8));
	Kalk("delenyie = ", del(8.0, 4.0));
	Kalk("vichitanye = ", sub(10, 8));
	Kalk("umnojenie = ", umn(4, 7));
	Kalk("max = ", maxx(-3, 8));
	Kalk("min = ", minn(3, 23));
	Kalk("sredznacch = ", sredznacch(6.0, 9.0));
	Kalk("otrizatelnoe = ", otriz(-7, 3));
}
