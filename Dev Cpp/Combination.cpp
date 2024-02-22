#include<conio.h>
#include<iostream>
using namespace std;

long myFactorial(int num)
{
	long result = 1;
	for(int i = 1; i <= num; i++)
	{
		result = result * i;
	}
	return result;
}

int Combination(int n, int r)
{
	int result = (myFactorial(n))/((myFactorial(r))*(myFactorial(n - r)));
	return result;
}

int main()
{
	system("Color 0F");
	char exe = 'y';
	do
	{ 
	int n, r;
	cout << "n = ";
	cin >> n;
	cout << "r = ";
	cin >> r;
	cout << endl;
	cout << "C = " << Combination(n, r);
	cout << endl << "------" << endl;
	}
	while(exe = 'y');
	return 0;
}
