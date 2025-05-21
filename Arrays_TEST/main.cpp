#include<iostream>
using namespace std;

#define delimiter "\n------------------------------------\n"
#define delimiter2 "\n===================================\n"

const int ROWS = 4;
const int COLS = 10;

void FillRand(int arr[], const int n); //���������� ������� ���������� �������
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);    //������� ������ �� �����
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);     //���������� �������
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);        //����� �������
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);     //��������������������
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);


int Min(int arr[], const int n);
double Min(double arr[], const int n);
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
double Max(double arr[], const int n);
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);

void  ShiftLeft(int arr[], const int n, const int shifts); // ����� �����
void  ShiftLeft(double arr[], const int n, const int shifts);
void  ShiftRight(int arr[], const int n, const int shifts);
void  ShiftRight(double arr[], const int n, const int shifts); 

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);


void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "��������������������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << Min(arr, n) << endl;
	cout << "������������ �������� � �������: " << Max(arr, n) << endl;


	cout << delimiter << endl;

	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "��������������������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << Min(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << Max(brr, SIZE) << endl;
	Print(brr, SIZE);
	int shifts;
	cout << "������� ���������� ������ �����: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	Print(brr, SIZE);

	cout << "������� ���������� ������� ������: "; cin >> shifts;
	ShiftRight(brr, SIZE, shifts);
	Print(brr, SIZE);



	cout << delimiter2 << endl;


	int i_arr_2[ROWS][COLS] =              //���������� ���������� �������
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};


	FillRand(i_arr_2, ROWS, COLS);

	cout << "����� ������ �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "��������������������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ������ �������: " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ������ �������" << Max(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	Print(i_arr_2, ROWS, COLS);



}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;            //������� rand()���������� �������� ����� � ��������� ��0 �� 32767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	int exch = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)//int l = k > i ? 0 : j + 1
				{
					iter++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];  //��������� ������� arr[i][j]
						arr[i][j] = arr[k][l];   // ������������ ������� arr[k][l]
						arr[k][l] = buffer;
						exch++;
					}
				}
			}
		}
	}
	cout << "����� ��������" << iter << endl;
	cout << "����� �������" << exch << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	int exch = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)//int l = k > i ? 0 : j + 1
				{
					iter++;
					if (arr[k][l] < arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exch++;
					}
				}
			}
		}
	}
	cout << "����� ��������" << iter << endl;
	cout << "����� �������" << exch << endl;
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;

}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;

}


double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double Min(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}

	}
	return min;
}
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}

	}
	return min;
}


int Max(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double Max(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}

void  ShiftLeft(int arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void  ShiftLeft(double arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void  ShiftRight(int arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}
void  ShiftRight(double arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	//for (int i = 0; i < ROWS; i++)
	//{
		//ShiftLeft(arr[i], COLS, shifts);
	//}
	ShiftLeft(arr[0], ROWS * COLS, shifts); //�������� �����
}