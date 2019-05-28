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
	vector<int> MergeSort(vector<int>&, int, int);
	vector<int> QuickSort(vector<int>&, int, int);
	int Divide(vector<int>&,int,int);
};

