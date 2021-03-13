#include<iostream>
#include<conio.h>
using namespace std;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define CALC
//#define CALC_SWITCH
//#define SHOOTER
#define Escape      27
#define ARROW_UP    72
#define ARROW_DOWN  80
#define ARROW_LEFT  75
#define ARROW_RIGHT 77
//#define SHOOTER_SWITCH



void main()
{
	setlocale(LC_ALL, "Russian");

#if defined FACTORIAL
	// 5! = 1*2*3*4*5 = 120
	int n; // ����� �������� � ����������
	double f=1; // ��������� ���������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;

#endif

#if defined POWER
	double a; //��������� �������
	int n; //���������� �������
	double N=1; //�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;


	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif
	
#if defined ASCII
	cout << "ASCII - ������� ����� for-��:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	cout << "\n-----------------------------------------------\n";
	setlocale(LC_ALL, "Russian");
	cout << "ASCII-������� ��������� for-��:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << char(i * 16 + j) << " ";
		}
		cout << endl;

	}
#endif

#if defined CALC
	double a, b;  //����� �������� � �����������
	char s;       //Sing - ���� ��������
	double result;
	cout << "������� ������� �������������� ����������: "; cin >> a >> s >> b;
	if (s == '+')
	{
		result = a + b;
		cout << a << " " << s << " " << b << " = " << result << endl;

	}
	else if (s == '-')
	{
		if (a >= b)
		{
			result = a - b;
			cout << a << " " << s << " " << b << " = " << result << endl;
		}
		else cout << "�������� �����������!" << endl;
	}
	else if (s == '*')
	{
		result = a * b;
		cout << a << " " << s << " " << b << " = " << result << endl;

	}
	else if (s == '/')
	{
		if (b != 0)
		{
			result = a / b;
			cout << a << " " << s << " " << b << " = " << result << endl;
		}
		else
		{
			cout << "Error: �� ���� ������ ������" << endl;
		}
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
	//cout << a << " " << s << " " << b << " = " << result << endl;
#endif

#if defined CALC_SWITCH
	double a, b; //����� �������� � ����������
	char s;//Sing - ���� ��������
	cout << "������� ������� ������������� ���������: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':
		if (b != 0) cout << a << " / " << b << " = " << a / b << endl;
		else cout << "Error: �� ���� ������ ������" << endl;
		break;
	default: cout << "Error: No operation" << endl;
	}
	#endif
#if defined SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == ARROW_UP)
			cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == ARROW_DOWN)
			cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == ARROW_LEFT)
			cout << "�����" << endl;
		else if (key == 'd'|| key == 'D' || key == ARROW_RIGHT)
			cout << "������" << endl;
		else if (key == ' ')
			cout << "������" << endl;
		else
			if (key != -32 && key != Escape) cout << "Error" << endl;				
	} while (key != Escape);
#endif

#if defined SHOOTER_SWITCH
	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case 'w': 
		case 'W': 
		case ARROW_UP: cout << "������" << endl; break;
		case 's': 
		case 'S': 
		case ARROW_DOWN: cout << "�����" << endl; break;
		case 'a': 
		case 'A': 
		case ARROW_LEFT: cout << "�����" << endl; break;
		case 'd': 
		case 'D': 
		case ARROW_RIGHT: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case 13: cout << "�����" << endl; break;
		case Escape: cout << "Exit" << endl;
		case -32: break;
		default: cout << "Error" << endl;



		}
	} while (key != Escape);

#endif

}