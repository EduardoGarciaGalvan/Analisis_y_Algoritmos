#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Busqueda
{
public:
	Busqueda();
	~Busqueda();
	int LinealSearch(vector<int>, int);
	int BinarySearch(vector<int>, int, int, int);
private:
};