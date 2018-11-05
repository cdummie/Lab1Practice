#pragma once

class Array
{
	double *arr;
	int n;
	static int NoE;

public:

	Array();
	Array(int);
	Array(const Array &Arr);
	void printArr();
	void createArr();
	void printPoly();
	void sum(const Array&, const Array&);
    void getNoE();
	
	~Array();

};



