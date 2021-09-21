#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double alpha, x, y, z, m, n, a, b, c, t;

	cout << "Enter alpha (deg) = ";
	cin >> alpha;
	alpha = alpha * M_PI / 180;
	cout << "Alpha (rad) = " << alpha << endl;
	cout << endl << "1.";
	cout << " z_1 = 2 * pow(sin(M_PI * 3 - 2 * alpha), 2) * pow(cos(M_PI * 5 + 2 * alpha), 2) = " <<
		2 * pow(sin(M_PI * 3 - 2 * alpha), 2) * pow(cos(M_PI * 5 + 2 * alpha), 2) << endl;
	cout << "   z_2 = 1 / 4 - 1 / 4 * sin(M_PI * 5 / 2 - 8 * alpha) = " <<
		1 / 4 - 1 / 4 * sin(M_PI * 5 / 2 - 8 * alpha) << endl;
	cout << endl << "2.";
	cout << " z_1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha) = " <<
		cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha) << endl;
	cout << "   z_2 = 2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha) = " <<
		2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha) << endl;
	cout << endl << "3.";
	cout << " z_1 = pow(cos(M_PI * 3 / 8 - alpha / 4) , 2) - pow(cos(M_PI * 11 / 8 + alpha / 4) , 2) = " <<
		pow(cos(M_PI * 3 / 8 - alpha / 4), 2) - pow(cos(M_PI * 11 / 8 + alpha / 4), 2) << endl;
	cout << "   z_2 = sqrt(2) / 2 * sin(alpha / 2) = " <<
		sqrt(2) / 2 * sin(alpha / 2) << endl;
	cout << endl << "4.";
	cout << " z_1 = sin(4 * alpha) / (1 + cos(4 * alpha)) * cos(2 * alpha) / (1 + cos(2 * alpha)) = " <<
		sin(4 * alpha) / (1 + cos(4 * alpha)) * cos(2 * alpha) / (1 + cos(2 * alpha)) << endl;
	cout << "   z_2 = 1 / tan(M_PI * 3 / 2 - alpha) = " <<
		1 / tan(M_PI * 3 / 2 - alpha) << endl;
	cout << endl << "Enter x = ";
	cin >> x;
	cout << endl << "5.";
	cout << " z_1 = sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2) = " <<
		sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2) << endl;
	cout << "   z_2 = 1 / sqrt(x + 2) = " <<
		1 / sqrt(x + 2) << endl;
	cout << endl << "6.";
	cout << " z_1 = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9)) = " <<
		(x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9)) << endl;
	cout << "   z_2 = sqrt((x + 3) / (x - 3)) = " <<
		sqrt((x + 3) / (x - 3)) << endl;
	cout << endl << "7.";
	cout << " z_1 = sqrt(pow((3 * x + 2), 2) - 24 * x) / (3 * sqrt(x) - 2 / sqrt(x)) = " <<
		sqrt(pow((3 * x + 2), 2) - 24 * x) / (3 * sqrt(x) - 2 / sqrt(x)) << endl;
	cout << "   z_2 = (-1) * sqrt(x) = " <<
		(-1) * sqrt(x) << endl;
	cout << endl << "8.";
	cout << " z_1 = ((x + 2) / (sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * (sqrt(x) - sqrt(2)) / (x + 2) = " <<
		((x + 2) / (sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * (sqrt(x) - sqrt(2)) / (x + 2) << endl;
	cout << "   z_2 = 1 / (sqrt(x) + sqrt(2)) = " <<
		1 / (sqrt(x) + sqrt(2)) << endl;
	cout << endl << "9.";
	cout << " z_1 = pow(((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x + x * x) / (2 * x - x * x)), -1) * (5 - 2 * x * x) = " <<
		pow(((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x + x * x) / (2 * x - x * x)), -1) * (5 - 2 * x * x) << endl;
	cout << "   z_2 = (4 - x * x) / (2) = " <<
		(4 - x * x) / (2) << endl;
	cout << endl << "Enter m = ";
	cin >> m;
	cout << "Enter n = ";
	cin >> n;
	cout << endl << "10.";
	cout << " z_1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m) = " <<
		((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m) << endl;
	cout << "   z_2 = (sqrt(m) - sqrt(n)) / m = " <<
		(sqrt(m) - sqrt(n)) / m << endl;

	cout << "__________________________________________________________________________________________________________" << endl;

	cout << endl << "11.";
	x = 2.124, y = -4.120, z = 5.3;
	cout << " a = " <<
		(2 * cos(x - M_PI / 6)) / (1 / 2 + pow(sin(y), 2)) << endl;
	cout << "    b = " <<
		cos(z) + (z * z * z) / (7 + z * z * z / 2) << endl;
	cout << "    When x = 2.124, y = -4.120, z = 5.3" << endl;
	cout << endl << "12.";
	x = 1.825, y = 18.225, z = -3.298;
	cout << " gamma = " <<
		abs(pow(x, y / x) - pow(y / x, 1 / 3)) << endl;
	cout << "    psi = " <<
		(y - x) * (y - z / (y - x)) / (1 + pow((y - x), 2)) << endl;
	cout << "    When x = 1.825, y = 18.225, z = -3.298" << endl;
	cout << endl << "13.";
	x = 0.335, y = 0.025;
	cout << " s = " <<
		1 + x + x * x / 2 + x * x * x / 6 + x * x * x * x / 24<< endl;
	cout << "    psi = " <<
		x * (sin(x * x * x) + pow(cos(y), 2)) << endl;
	cout << "    When x = 0.335, y = 0.025" << endl;
	cout << endl << "14.";
	a = -0.5, b = 1.7, t = 0.44;
	cout << " y = " <<
		exp(b * t) * sin(a * t + b) - sqrt(abs(b * t + a)) << endl;
	cout << "    s = " <<
		b * sin(a * t * t* cos(2 * t)) - 1 << endl;
	cout << "    When a = -0.5, b = 1.7, t = 0.44" << endl;
	cout << endl << "15.";
	a = 1.5, b = 15.5, x = -2.9;
	cout << " w = " <<
		sqrt(x * x + b) - b * b * pow(sin(x + a), 3) / x << endl;
	cout << "    y = " <<
		 pow(cos(x * x * x), 2) - x / sqrt(a * a + b * b) << endl;
	cout << "    When a = 1.5, b = 15.5, x = -2.9" << endl;
	cout << endl << "16.";
	a = 16.5, b = 3.4, x = 0.61;
	cout << " s = " <<
		x * x * x * pow(tan((x + b) * (x + b)), 2) + a / sqrt(x + b) << endl;
	cout << "    Q = " <<
		(b * x * x - a) / (exp(a * x) - 1) << endl;
	cout << "    When a = 16.5, b = 3.4, x = 0.61" << endl;
	cout << endl << "17.";
	a = 0.7, b = 0.05, x = 0.5;
	cout << " R = " <<
		(x * x * (x + 1)) / b - pow(sin(x + a), 2) << endl;
	cout << "    s = " <<
		sqrt(x * b / a) + pow(cos(pow((x + b), 3)), 2) << endl;
	cout << "    When a = 0.7, b = 0.05, x = 0.5" << endl;
	cout << endl << "18.";
	a = 1.1, b = 0.004, x = 0.2;
	cout << " y = " <<
		pow(sin(pow((x * x + a), 2)), 3) - sqrt(x / b) << endl;
	cout << "    z = " <<
		x * x / a + cos(pow((x + b), 3)) << endl;
	cout << "    When a = 1.1, b = 0.004, x = 0.2" << endl;
	cout << endl << "19.";
	m = 2, c = -1, t = 1.2, b = 0.7;
	cout << " f = " <<
		pow((m * tan(t) + abs(c * sin(t))), 1 / 3) << endl;
	cout << "    z = " <<
		m * cos(b * t * sin(t)) + c << endl;
	cout << "    When m = 2, c = -1, t = 1.2, b = 0.7" << endl;
	cout << endl << "20.";
	a = 3.2, b = 17.5, x = -4.8;
	cout << " y = " <<
		b * pow(tan(x), 2) - a / pow(sin(x / a), 2) << endl;
	cout << "    d = " <<
		a * exp((-1) * sqrt(a)) * cos(b * x / a) << endl;
	cout << "    When a = 3.2, b = 17.5, x = -4.8" << endl;

	cout << "__________________________________________________________________________________________________________" << endl;

	cout << endl << "21.";
	cout << " The law of movement is: s = t * t * t - 3 * t * t + 2 \n    Enter t (in seconds) = ";
	cin >> t;
	cout << "    The velocity (v) at the time (t): v(t) = " <<
		3 * t * t - 6 * t << endl;
	cout << endl << "22.";
	cout << " Enter coordinates (x,y):\n    x = "; cin >> x; cout << "    y = "; cin >> y;
	cout << "    ||(x y)|| = r = sqrt(x * x + y * y) = " << sqrt(x * x + y * y);
	cout << endl << "    cos(theta) = x / r = " << x / sqrt(x * x + y * y);
	cout << endl << "    sin(theta) = y / r = " << y / sqrt(x * x + y * y);
	cout << endl << "    theta = arcsin(y / r) = arccos(x / r) = " << acos(x / sqrt(x * x + y * y));
	cout << endl << "    Our equation will be written as r = " << x << " * cos(" << acos(x / sqrt(x * x + y * y)) << ") + " << y <<
		" * sin(" << acos(x / sqrt(x * x + y * y)) << ")";
	cout << endl << "23.";
	cout << " Enter coordinates of the 1st vector (x y):\n    x = "; cin >> x; cout << "    y = "; cin >> y;
	cout << "    Enter coordinates of the 2nd vector (a b):\n    a = "; cin >> a; cout << "    b = "; cin >> b;
	cout << "    The cosine between (x y) and (a b) is cos(theta) = (x y) * (a b) / ||(x y)|| * ||(a b)|| = " <<
		(x * a + y * b) / ((x * x + y * y) * (a * a + b * b)) << endl;
}

/* cout << endl << "";
cout << " z_1 =  = " <<
	<< endl;
cout << "   z_2 =  = " <<
	<< endl; */
/* cout << endl << "";
x = , y = , z = ;
cout << " a = " <<
	<< endl;
cout << "    b = " <<
	<< endl;
cout << "    When " << endl; */

// 1 / tan(M_PI * 3 / 2 - alpha) != 1 / tan(3 / 2 * M_PI - alpha) ?