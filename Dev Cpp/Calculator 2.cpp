#include<conio.h>
#include<iostream>
using namespace std;

int power(int base, int pow)
{
	int result = 1;
	for(int i = 0; i < pow; i++)
	{
		result = result * base;
	}
	cout << result;
	return result;
}

int main()
{
	system("Color 0F");
	cout << "\t\t\t<-------Scientific Calculator------->" << endl;
	cout << "(Press any key to continue)";
	getch();
	system("cls");
	
	int opcount;
	int operation;
	int a, b, c;
	cout << "How many operands will you use?" << endl;
	cout << "3 operands.\n2 operands.\n1 operand." << endl;
	cout << "--->";
	cin >> opcount;
	cout << endl;
	
	switch(opcount)
	{
		case 3:
			{
				cout <<"Enter the values of operands." << endl;
				cout <<"--->";
				cin >> a;
				cout <<"--->";
				cin >> b;
				cout <<"--->";
				cin >> c;
				
				cout << "\nWhich operation do you wish to perform?" << endl;
				cout << "1.Addition." << endl;
				cout << "2.Multiplication." << endl;
				cout << "--->";
				cin >> operation;
				cout << endl;
				
				switch(operation)
				{
					case 1:
						{
							cout << a + b + c ;
							break;
						}
					case 2:
						{
							cout << a * b * c ;
							break;
						}
		            
					default:
						cout << "Invalid Command!!!" << endl;
				
				break;
			    }
			
			    break;
			}
		case 2:
			{
				cout << "Enter the values of operands." << endl;
				cout << "--->";
				cin >> a;
				cout << "--->";
				cin >> b;
				
				cout << "\nWhich operation do you wish to perform?" << endl;
				cout << "1.Addition." << endl;
				cout << "2.Subtraction." << endl;
				cout << "3.Multiplication." << endl;
				cout << "4.Division." << endl;
				cout << "5.Exponent." << endl;
				cout << "--->";
				cin >> operation;
				cout << endl;
				
				switch(operation)
				{
					case 1:
						{
							cout << a + b;
							break;
						}
					case 2:
						{
							cout << a - b;
							break;
						}
					case 3:
						{
							cout << a * b;
							break;
						}
					case 4:
						{
							cout << a / b;
							break;
						}
					case 5:
						{
							cout << power(a, b);
							break;
						}
					default:
						cout << "Invalid Command!!!" << endl;
			    }
				
				break;
			}
		case 1:
			{
				cout << "Enter the values of operands." << endl;
				cout << "--->";
				cin >> a;
				
				cout << "\nWhich operation do you wish to perform?" << endl;
				cout << "1.Cube." << endl;
				cout << "2.Square." << endl;
				cout << "3.Cube Root." << endl;
				cout << "4.Square Root." << endl;
				cout << "5.Factorial." << endl;
				cout << "--->";
				cin >> operation;
				cout << endl;
				
				switch(operation)
				{
					case 1:
						{
							cout << a * a * a;
							break;
						}
					case 2:
						{
							cout << a * a;
							break;
						}
					case 3:
						{
							//cout << myCbRoot(a);
							break;
						}
					case 4:
						{
							//cout << mySqRoot(a);
							break;
						}
					case 5:
						{
							//cout << myFactorial(a);
							break;
						}
					default:
						cout << "Invalid Command!!!" << endl;
			    }
				
				break;
			}
			
		default:
			cout << "Invalid Command!!!" << endl;
	}
	return 0;
}
