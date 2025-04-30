#include<iostream>
using namespace std;

// прототип ОБЪЯВЛЕНИЕ ФУНКЦИИ
int Sum(int a, int b);
int Dif(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);
long long Factorial(int f, int n);
double Stepen(int a, int n, double N);

void main()
{
	setlocale(LC_ALL, "");
	//int a, b;
	//cout << "Введите два числа"; cin >> a >> b;
	//int c;                                   
	//cout << a << "+" << b << "=" << Sum(a, b) << endl;   //вызов - использование функции
	//cout << a << "-" << b << "=" << Dif(a,b) << endl;    //вызов
	//cout << a << "*" << b << "=" << Product(a,b) << endl;//вызов
	//cout << a << "/" << b << "=" << Quotient(a,b) << endl;//вызов
	
	//int n;
	//cout << "Введите количество итераций:"; cin >> n;
	//long long f = 1;
	//cout << Factorial(f, n);

	double a; // N=a^n; a - основание степени , n - показатель степени, N - степень
	int n;
	cout << "Введите основание степени"; cin >> a;
	cout << "Введите показатель степени"; cin >> n;
	double N=1;
	cout << Stepen(a, n, N);
}

// реализация
int Sum(int a, int b) 
{
	int c = a + b; 
	return c;
}
int Dif(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}

long long Factorial(int f,int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	return f;
}

double Stepen(int a, int n, double N)
{
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

