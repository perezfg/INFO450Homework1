#include <iostream>

using namespace std;

int main()
{
	int length= 7;
	int width = 6;
	float perimeter;
	float area;
	perimeter = length * 2 + width * 2;
	area = length * width;
	cout << "The perimeter is " << perimeter << endl;
	cout << "The area is " << area << endl;

	system("pause");

	return 0;
}