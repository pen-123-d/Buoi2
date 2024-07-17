#include <iostream>
#include <ctime>

using namespace std;



void So_Chan()
{
	int a[100],n,tmp;
	cout << " Nhap so phan tu cua mang" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Vui long nhap so chan" << endl;
		cin >> tmp;
		if (tmp % 2 == 0)
		{
			a[i] = tmp;
		}
		else
		{
			cout << "Loi " << endl;
			i--;
		}

	}
}

int main()
{
	//int a[50], n;
	//cout << "Vui long nhap so luog phan tu" << endl;
	//cin >> n;
	//srand(time(NULL));
	//int tmp = rand() % (50 - 15 + 1) + 15;
	//for (int i = 0; i < n; i++)
	//{
	//	a[i] = rand() % (50 - 15 + 1) + 15;

	//}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << a[i] << endl;

	//}
	So_Chan();
	system("pause");
}