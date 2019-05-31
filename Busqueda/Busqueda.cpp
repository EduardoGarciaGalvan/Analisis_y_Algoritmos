#include "Busqueda.h"

Busqueda::Busqueda()
{
}

Busqueda::~Busqueda()
{
}

int Busqueda::LinealSearch(vector<int> vec,int num)
{
	int i;
	for (i = 0; i < vec.size(); i++)
		if (vec[i] == num)
		{
			cout << "El numero: " << num << "\n Esta en la posicion: " << i << endl;
			return i;
		}
	return -1;
}

int Busqueda::BinarySearch(vector<int> vec, int num, int left, int right)
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;
		if (vec[mid] == num)
		{
			cout << "El numero: " << num << ". Esta en la posicion: " << mid << endl;
			return mid;
		}
		if (vec[mid] > num)
		{
			return BinarySearch(vec, left, mid - 1, num);
		}
		return BinarySearch(vec, mid + 1, right, num);
	}
	return -1;
}
