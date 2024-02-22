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
	for(int i = num; i>=1; i--)
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

int main()
{
	system("Color 0F");
	char run;
	cout << "\t\t\t<-------Scientific Calculator------->" << endl;
	cout << "(Press any key to continue)";
	getch();
	system("cls");
	
	do
	{
		system("cls");
		int opcount;
		int operation;
		double a, b, c;
		cout << "How many operands will you use?" << endl;
		cout << "3 operands.\n2 operands.\n1 operand." << endl;
		cout << "--->";
		cin >> opcount;
	
		switch(opcount)
	    	{
		    case 3:
			    {	
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
							    cout <<"Enter the first number:" << endl;
								cout <<"--->";
								cin >> a;
								cout <<"Enter the second number:" << endl;
								cout <<"--->";
								cin >> b;
								cout <<"Enter the third number:" << endl;
								cout <<"--->";
								cin >> c;
								cout << "\nThe Sum of " << a << ", " << b << " and " << c << " is " << a + b + c ;
								getch();
								break;
							}
					    case 2:
						    {
								cout <<"Enter the first number:" << endl;
				            	cout <<"--->";
								cin >> a;
								cout <<"Enter the second number:" << endl;
								cout <<"--->";
								cin >> b;
								cout <<"Enter the third number:" << endl;
								cout <<"--->";
								cin >> c;
								cout << "\nThe Product of " << a << ", " << b << " and " << c << " is " << a * b * c ;
								getch();
							    break;
						    }
		            
						default:
						cout << "\nInvalid Command!!!";
						getch();
			    	}
			
			    	break;
				}
			case 2:
				{
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
								cout << "Enter first number:" << endl;
				            	cout << "--->";
								cin >> a;
								cout << "Enter second number:" << endl;
								cout << "--->";
								cin >> b;
								cout << "\nThe Sum of " << a << " and " << b << " is " << a + b;
								getch();
								break;
							}
						case 2:
							{
						    	cout << "Enter first number:" << endl;
				            	cout << "--->";
								cin >> a;
								cout << "Enter second number:" << endl;
								cout << "--->";
								cin >> b;
								cout << "\nThe Difference of " << a << " and " << b << " is " << a - b;
								getch();
								break;
							}
						case 3:
							{
								cout << "Enter first number:" << endl;
				            	cout << "--->";
								cin >> a;
								cout << "Enter second number:" << endl;
								cout << "--->";
								cin >> b;
								cout << "\nThe Product of " << a << " and " << b << " is " << a * b;
								getch();
								break;
							}
						case 4:
							{
								int x, y;
								cout << "Enter Dividend:" << endl;
				         	   cout << "--->";
								cin >> x;
								cout << "Enter Divisor:" << endl;
								cout << "--->";
								cin >> y;
								cout << "\nThe Quotient of " << x << " when divided by " << y << " is " << x / y;
								cout << "\nThe Remainder is " << x % y;
								getch();
								break;
							}
						case 5:
							{
								cout << "Enter base number:" << endl;
				    	        cout << "--->";
								cin >> a;
								cout << "Enter its exponent:" << endl;
								cout << "--->";
								cin >> b;
								cout << endl << a << " to the power of " << b << " is " << myExponent(a, b);
								getch();
								break;
							}
						default:
						cout << "\nInvalid Command!!!";
						getch();
			    	}
					
					break;
				}
			case 1:
				{
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
								cout << "Enter a number to find its cube:" << endl;
								cout << "--->";
				    		    cin >> a;
								cout << "\nThe cube of " << a << " is " << a * a * a;
								getch();
								break;
							}
						case 2:
							{
								cout << "Enter a number to find its square:" << endl;
								cout << "--->";
					            cin >> a;
								cout << "\nThe Square of " << a << " is " << a * a;
								getch();
								break;
							}
						case 3:
							{
								cout << "Enter a number to find its cube root:" << endl;
								cout << "--->";
					            cin >> a;
								cout << "\nThe Cube Root of " << a << " is " << myCbRoot(a);
								getch();
								break;
							}
						case 4:
							{
								cout << "Enter a number to find its square root:" << endl;
								cout << "--->";
					            cin >> a;
								cout << "\nThe Square Root of " << a << " is " << mySqRoot(a);
								getch();
								break;
							}
						case 5:
							{
								cout << "Enter a number to find its factorial:" << endl;
								cout << "--->";
					            cin >> a;
								cout << "\nThe Factorial of " << a << " is " << myFactorial(a);
								getch();
								break;
							}
						default:
						cout << "\nInvalid Command!!!";
						getch();
				    }
					
					break;
				}
				
				default:
				cout << "\nInvalid Command!!!";
				getch();
			}
		
		cout << endl << "\nDo you want to use the calculator once again?" << endl;
		cout << "y = yes \nn = no" << endl;
		cout << "===>";
		cin >> run ;
		cout << endl;
		
    } while(run == 'y');
    
	cout << "Closing Program Calculator!";
	getch();
    
		return 0;
}
