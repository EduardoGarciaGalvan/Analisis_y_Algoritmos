#pragma once
#include <vector>
#include <time.h>
#include <iostream>
using namespace std;

enum ORDENAMIENTO
{
	Ascendente,
	Descendente, 
	Ramdom
};

class CVector
{
public:
	CVector();
	~CVector();
	vector <int>VectorGenerate(int n, ORDENAMIENTO ordenamiento);
	void Print();
private:

	vector <int>*m_entrada;
};

