// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <conio.h>

using namespace std;

int n;
double b, q;
double GeoProgress(double b, double q, int n)
{
 if (n==1) return b;
 else return q*GeoProgress(b,q,n-1);
}
int main()
 {
	 setlocale(LC_ALL, "Russian");
	 cout << "������� ������ ���� �������������� ���������� - ";
	 cin >> b;
	 cout << "������� ����������� �������������� ���������� - ";
	 cin >> q;
     cout << "\n ������� ���� ���������� ����� = " << GeoProgress(b,q,n);
 
 getchar();
 getchar();
 return 0;
 }