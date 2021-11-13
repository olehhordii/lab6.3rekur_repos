// lab6.3_rekur.cpp 

using namespace std;
#include <iostream>
#include <iomanip>

template <typename T>
void CreateArray(T* a, const int size, const int Low, const int High,int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		CreateArray<int>(a, size, Low, High, i + 1);
	}
}

void CreateArray(int* a, const int size, const int Low, const int High,int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		CreateArray(a, size, Low, High, i + 1);
	}

}
template <typename T>
void PrintArray(T* a, const int size,int i) {
	cout << setw(4) << a[i];
	if (i < size - 1) {
		PrintArray<int>(a, size, i + 1);
	}
	else {
		cout << endl;
	}
}
void PrintArray(int* a, const int size,int i) {
	cout << setw(4) << a[i];
	if (i < size - 1) {
		PrintArray(a, size, i + 1);
	}
	else {
		cout << endl;
	}

}
template <typename T>
T SumParn(T* a, const int size,int i,T s) {
	if (a[i] % 2 == 0) {
		s += a[i];
	}
	if (i < size - 1)
		return SumParn<int>(a, size, i + 1, s);
	else
		return s;

}
int SumParn(int* a, const int size, int i, int s) {
	if(a[i] % 2 == 0) {
		s += a[i];
	}
	if (i < size - 1)
		return SumParn(a, size, i + 1, s);
	else
		return s;

}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 7;
	int a[n];
	int Low, High;
	cout << "Enter low value "; cin >> Low;
	cout << endl;
	cout << "Enter high value "; cin >> High;


	CreateArray<int>(a, n, Low, High,0); //шабл
	//CreateArray(a, n, Low, High,0);
	PrintArray<int>(a, n,0);  //шабл
	//PrintArray(a, n,0);
	cout << " SumParn = " << SumParn<int>(a, n,0,0) << endl;  //шабл
	//cout << " SumParn = " << SumParn(a, n,0,0) << endl;
	return 0;
}

