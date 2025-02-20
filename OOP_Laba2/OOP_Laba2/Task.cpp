#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "RUS");
	int l, m;
	int lp;
	float *arr = new float[lp];
	float S=0;
	cout << "Ââåäèòå ðàçìåðíîñòü ìàññèâà: ";
	cin >> l >> m;
	float* Q = new float[l];
	float** array = new float* [l];
	for (int i = 0; i < l; i++) array[i] = new float[l];
	cout << "Ââåäèòå ýëåìåíòû ìàññèâà: " << endl;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < m; j++) {
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
			S += array[i][j];
		}
		Q[i] = S / m;
	}


	for (int i = 0; i < l; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] - Q[i] << " ";
		}
		cout << endl;
	}

}

	int lp;
	float max = INT_MIN;
	float k=0;
	int cnt = 0;

	cout << "Введите количество элементов массива: ";
	cin>>lp;
	float * arr = new float[lp];
	for (int i = 0;i < lp;i++) {
		cout << "array[" << i << "] = ";
		cin >> arr[i];
		if (arr[i] < 0){
			cnt++;
			k += arr[i];
		}
		if (arr[i] > max) max = arr[i];

		}
	;
	
	cout << "Максимальный элемент: " << max << endl;
	if (k == 0) cout << "Отрицательных элементов в массиве нет" << endl;
	 else cout << "Среднее арифметическое отрицательных элементов массива: " << k/cnt << endl;
	cout << "Вывод массива в обратном порядке: ";
	for (int i = lp - 1;i >= 0;i--) {
		cout << arr[i] << " ";
	}

}

float sort_select_one(float *arr, int lp)
{
	int middle;
	for (int i = 0; i < lp-1; i++)
	{
		middle = i;
		for (int j = i+1; j < lp; j++)
		{
			if (arr[j] < arr[middle])
			{
				middle = j;
				int temp = arr[j];
				arr[j] = arr[middle];
				arr[middle] = temp;

			}
		}
	}
	return *arr;
}
