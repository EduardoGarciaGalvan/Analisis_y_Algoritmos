#include "pch.h"
#include "Ordenamiento.h"
#include <chrono>


Ordenamiento::Ordenamiento()
{
}


Ordenamiento::~Ordenamiento()
{
}

void Ordenamiento::print(vector<int> vec)
{
	std::chrono::time_point<std::chrono::system_clock> inicio, fin;
	std::chrono::duration<double> seg;
	vector <int> m_vres;
	/*inicio = std::chrono::system_clock::now();
	m_vres = BubbleSort(vec);
	fin = std::chrono::system_clock::now();
	cout << "Bubble: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size()-1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
	inicio = std::chrono::system_clock::now();
	m_vres = InsertionSort(vec);
	fin = std::chrono::system_clock::now();
	cout << "Insertion: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size()-1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;*/
	inicio = std::chrono::system_clock::now();
	m_vres = MergeSort(vec, 0, vec.size()-1);
	fin = std::chrono::system_clock::now();
	cout << "Merge: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size() - 1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
	inicio = std::chrono::system_clock::now();
	m_vres = QuickSort(vec, 0, vec.size() - 1);
	fin = std::chrono::system_clock::now();
	cout << "Quick: ";
	for (int i = 0; i < m_vres.size(); i++)
	{
		cout << m_vres.at(i);
		if (i < m_vres.size() - 1)
		{
			cout << ", ";
		}
		else cout << endl;
	}
	seg = fin - inicio;
	cout << "Tiempo transcurrido: " << seg.count() << " seg" << endl;
}

vector<int> Ordenamiento::BubbleSort(vector<int> vec)
{
	vector<int> m_bubble;
	m_bubble = vec;
	for (int i = 0; i < m_bubble.size()-1; i++)
	{
		bool isOrder = true;
		for (int j = 0; j < m_bubble.size()-i-1; j++)
		{
			if (m_bubble[j] > m_bubble[j+1])
			{
				swap(m_bubble[j], m_bubble[j+1]);
				isOrder = false;
			}
		}
		if (isOrder) return m_bubble;
	}
	return m_bubble;
}

vector<int> Ordenamiento::InsertionSort(vector<int> vec)
{
	vector<int> m_insertion;
	m_insertion = vec;
	for (int i = 1; i < m_insertion.size(); i++)
	{
		int j = i - 1, pivot = m_insertion[i];
		while (j >= 0 && m_insertion[j] > pivot)
		{
			swap(m_insertion[j],m_insertion[j+1]);
			j--;
		}
	}
	return m_insertion;
}

vector<int> Ordenamiento::MergeSort(vector<int>& vec, int left,int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		MergeSort(vec, left, middle);
		MergeSort(vec, middle + 1, right);
		int n1 = middle - left + 1;
		int n2 = right - middle;

		vector<int> m_Left, m_Right;
		int i, j, k;

		for (i = 0; i < n1; i++)
		{
			m_Left.push_back(vec[left + i]);
		}
		for (j = 0; j < n2; j++)
		{
			m_Right.push_back(vec[middle + 1 + j]);
		}
		i = 0;
		j = 0;
		k = left;
		while (i < n1 && j <n2)
		{
			if (m_Left[i] <= m_Right[j])
			{
				vec[k] = m_Left[i];
				i++;
			}
			else
			{
				vec[k] = m_Right[j];
				j++;
			}
			k++;
		}
		while (i < n1)
		{
			vec[k] = m_Left[i];
			i++;
			k++;
		}

		while (j < n2)
		{
			vec[k] = m_Right[j];
			j++;
			k++;
		}
	}
	return vec;
}

vector<int> Ordenamiento::QuickSort(vector<int>& vec, int left, int right)
{
	if (left < right)
	{

		int pivot = Divide(vec, left, right);

		QuickSort(vec, left, pivot - 1);
		QuickSort(vec, pivot + 1, right);
	}
	return vec;
}

int Ordenamiento::Divide(vector<int>& vec, int start, int end)
{
	unsigned int pivot = vec[start];
	unsigned int left = start + 1;
	unsigned int right = end;
	unsigned int tmp;

	while (left != right)
	{
		if (vec[left] <= pivot) left++;
		else
		{
			while ((left != right) && (pivot < vec[right])) right--;
			tmp = vec[right];
			vec[right] = vec[left];
			vec[left] = tmp;
		}
	}

	if (vec[left] > pivot) left--;
	vec[start] = vec[left];
	vec[left] = pivot;

	return left;

}