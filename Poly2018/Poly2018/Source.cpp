#include <iostream>
#include "Poly2018.h"
using namespace std;

int main()
{
	Array a1(5), a2;
	
	
    a1.createArr();
	a2.createArr();

	Array a3;
	a3.sum(a1, a2);

	a3.printPoly();

	a3.getNoE();

	getchar();
	getchar();

	
}