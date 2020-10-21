#include <iostream>
using namespace std;
int main()
{
	double R; // radius
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "Radius = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
    // розгалуження в повній формі
	if (( -R <= x) && (x <= R) && ( -R <= y) && (y <=  R- sqrt(-2*R*x - x*x) ) ||
		(-R <= x) && (x <= R) &&  (sqrt(2*R*x - x*x) - R <= y) && ( y <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}