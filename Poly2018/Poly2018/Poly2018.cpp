#include <iostream>
#include "Poly2018.h"
using namespace std;

int Array::NoE = 0;   //ovako se inicijalizuje staticka promjenljiva

Array::Array()
{
	this->n = 0;
	arr = new double[n];
	NoE++;
}

Array::Array(int n)
{
	this->n = n;
	arr = new double[n];
	NoE++;
	
}

Array::Array(const Array &Arr)
{
	this->n = Arr.n;
	this->arr = new double[n];
	arr = Arr.arr;     //izgleda da radi i ovako, bez for petlje 
	NoE++;
}
void Array::printArr()
{    
	cout << "Vas niz je:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";

}

void Array::createArr()
{
	if (n == 0)
	{
		cout << "Unesite stepen polinoma:\n";
		cin >> n;
		n++;
		arr = new double[n];
		cout << "Sada unesite koeficijente polinoma (pocev od nultog):\n";
		for (int i = 0; i < n; i++)
			cin >> arr[i];
			}
	else
	{
		cout << "Unesite koeficijente polinoma (pocev od nultog):\n";
		for (int i = 0; i < n; i++)
			cin >> arr[i];
	}
}

void Array::printPoly()
{
	
	cout << "Vas polinom je:\n";

	cout << arr[0] << " + ";
	cout << arr[1] << "x + ";
	for (int i = 2; i < n-1; i++)
		if (arr[i] == 1)
			cout << "x^"<<i<<" + ";
		else if (arr[i] == 0)
			cout << "";
		else 
			cout << arr[i] << "x^" << i << " + ";
	cout << arr[n - 1] << "x^" << n - 1;
		
}

void Array::sum(const Array &A1, const Array &A2)
{
	this->n = A1.n >= A2.n ? A1.n : A2.n;
	int c = A1.n >= A2.n ? A2.n : A1.n;
    this->arr = new double[n];

	for (int i = 0; i < c; i++)
		arr[i] = A1.arr[i] + A2.arr[i];

	for(int i = c;i < n; i++)
		arr[i] = A1.n >= A2.n ? A1.arr[i] : A2.arr[i];

}
void Array::getNoE()
{
	cout << "\nImamo ukupno " << NoE<< " polinoma!";
}

Array::~Array()
{
		delete[] arr;
		NoE--;
}