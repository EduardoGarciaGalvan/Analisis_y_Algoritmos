#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Ordenamiento
{
public:
	Ordenamiento();
	~Ordenamiento();
	void print(vector<int> vec);
	vector<int> BubbleSort(vector<int>);
	vector<int> InsertionSort(vector<int>);

private:
	
};

