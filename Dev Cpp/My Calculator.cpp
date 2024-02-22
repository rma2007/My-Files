#include<conio.h>
#include<iostream>
using namespace std;

double myExponent(int base, int pow)
{
	double result = 1;
	for(int i = 0; i < pow; i++)
	{
		result = result * base;
	}
	return result;
}

unsigned long long myFactorial(int num)
{
	unsigned long long result = 1;
	for(int i = 1; i <= num; i++)
	{
		result = result * i;
	}
	return result;
}

double mySqRoot(int num)
{
	double result = 1;
	for (double i=0.00001; (i * i) <= num; i = i + 0.00001)
	{
		result = i;
	}
	return result;
}

double myCbRoot(int num)
{
	double result = 1;
	for (double i=0.00001; (i * i * i) <= num; i = i + 0.00001)
	{
		result = i;
	}
	return result;
}

long PermRep(int n, int r)
{
	long result = myExponent(n, r);
	return result;
}

long myPerm(int n, int r)
{
	long result = (myFactorial(n))/((myFactorial(n - r)));
	return result;
}

int Combination(int n, int r)
{
	int result = (myFactorial(n))/((myFactorial(r))*(myFactorial(n - r)));
	return result;
}

int main()
{
	char exe;
	system("Color 0F");
	cout << "\t\t\t<-------Advanced Calculator------->" << endl;
	cout << "(Press any key to continue)";
	getch();
	system("cls");
	
	do
	{
		char repeat;
		int op, opcount;
		double a, b, c, d, e;
		system("cls");
		cout << "Choose operation:-" << endl;
		cout << "1.Addition" << endl;
		cout << "2.Subtraction" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
		cout << "5.Exponent" << endl;
		cout << "6.Square" << endl;
		cout << "7.Cube" << endl;
		cout << "8.Square Root" << endl;
		cout << "9.Cube Root" << endl;
		cout << "10.Factorial" << endl;
		cout << "11.Permutation" << endl;
		cout << "12.Combination" << endl;
		//cout << "" << endl;
		cout << "--->";
		cin >> op;
		cout << endl;
		
		switch(op)
		{
			case 1:
				{
					cout << "Op-Count(2-5) = ";
					cin >> opcount;
					cout << endl;
					
					switch(opcount)
					{							
						case 2:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "\n===>";
								cout << a + b;
								break;
							}
							
						case 3:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "\n===>";
								cout << a + b + c;
								break;
							}
							
						case 4:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "Number 4 = ";
								cin >> d;
								cout << "\n===>";
								cout << a + b + c + d;
								break;
							}
							
						case 5:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "Number 4 = ";
								cin >> d;
								cout << "Number 5 = ";
								cin >> e;
								cout << "\n===>";
								cout << a + b + c + d + e;
								break;
							}
							
						default:
							{
							cout << "Choose between 2 and 5!" << endl;
							getch();
							}
							
					}
					break;
				}
				
			case 2:
				{
					cout << "Number 1 = ";
					cin >> a;
					cout << "Number 2 = ";
					cin >> b;
					cout << "\n===>";
					cout << a - b;
					break;
				}
				
			case 3:
				{
					cout << "Op-Count(2-5) = ";
					cin >> opcount;
					cout << endl;
					
					switch(opcount)
					{							
						case 2:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "\n===>";
								cout << a * b;
								break;
							}
							
						case 3:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "\n===>";
								cout << a * b * c;
								break;
							}
							
						case 4:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "Number 4 = ";
								cin >> d;
								cout << "\n===>";
								cout << a * b * c * d;
								break;
							}
							
						case 5:
							{
								cout << "Number 1 = ";
								cin >> a;
								cout << "Number 2 = ";
								cin >> b;
								cout << "Number 3 = ";
								cin >> c;
								cout << "Number 4 = ";
								cin >> d;
								cout << "Number 5 = ";
								cin >> e;
								cout << "\n===>";
								cout << a * b * c * d * e;
								break;
							}
							
						default:
							{
							cout << "Choose between 2 & 5!" << endl;
							getch();
							}
							
					}	
					break;
				}
				
			case 4:
				{
					cout << "Dividend = ";
					cin >> a;
					cout << "Divisor = ";
					cin >> b;
					int x = a, y = b;
					cout << "\n===>";
					cout << a / b << "\n(Q =  " << x / y << " )\n(R = " << x % y << " )";
					break;
				}
				
			case 5:
				{
					cout << "Base = ";
					cin >> a;
					cout << "Power = ";
					cin >> b;
					cout << "\n===>";
					cout << myExponent(a, b);
					break;
				}
				
			case 6:
				{
					cout << "Number = ";
					cin >> a;
					cout << "\n===>";
					cout << a * a;
					break;
				}
				
			case 7:
				{
					cout << "Number = ";
					cin >> a;
					cout << "\n===>";
					cout << a * a * a;
					break;
				}
				
			case 8:
				{
					cout << "Number = ";
					cin >> a;
					cout << "\n===>";
					cout << mySqRoot(a);
					break;
				}
				
			case 9:
				{
					cout << "Number = ";
					cin >> a;
					cout << "\n===>";
					cout << myCbRoot(a);
					break;
				}
				
			case 10:
				{
					cout << "Number:";
					cin >> a;
					cout << "\n===>";
					cout << myFactorial(a);
					break;
				}
				
			case 11:
				{
					cout << "Allow Repetition?(y/n)" << endl;
					cout << "--->";
					cin >> repeat;
					cout << endl;
					switch(repeat)
					{
						case 'y':
							{
								cout << "n = ";
								cin >> a;
								cout << "r = ";
								cin >> b;
								cout << "\n===>";
								cout << PermRep(a, b);
								break;
							}
							
						case 'n':
							{
								cout << "n = ";
								cin >> a;
								cout << "r = ";
								cin >> b;
								cout << "\n===>";
								cout << myPerm(a, b);
								break;
							}
						default:
							{
								cout << "\nInvalid character!!!" << endl;
								getch();
								break;
							}
					}
					break;
				}
				
			case 12:
				{
					cout << "n = ";
					cin >> a;
					cout << "r = ";
					cin >> b;
					cout << "\n===>";
					cout << Combination(a, b);
					break;
				}
				
			default:
				{
				cout << "\nInvalid operation!!!" << endl;
				getch();
				break;
				}				
		}
		
		cout << "\n\nExecute Calculator again?(y/n)" << endl;
		cout << "--->";
		cin >> exe;
	}
	while(exe == 'y');
	
	cout << "\nExiting Program Calculator!!!";
	return 0;
}
