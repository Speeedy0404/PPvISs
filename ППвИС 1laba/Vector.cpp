#include"Vector.h"
Vector::Vector()
{
	a = b = c = 0;
}

Vector::Vector(double i, double j, double k)
{
	a = i;
	b = j;
	c = k;
}

Vector& Vector::operator+(Vector obj)
{
	Vector temp;
	temp.a = this->a + obj.a;
	temp.b = this->b + obj.b;
	temp.c = this->c + obj.c;

	return temp;
}

Vector& Vector::operator=(Vector obj)
{
	this->a = obj.a;
	this->b = obj.b;
	this->c = obj.c;
	return *this;
}

Vector& Vector::operator+=(Vector obj)
{
	return *this = *this + obj;
}

Vector& Vector::operator-(Vector obj)
{
	Vector temp;
	temp.a = this->a - obj.a;
	temp.b = this->b - obj.b;
	temp.c = this->c - obj.c;

	return temp;
}

Vector& Vector::operator-=(Vector obj)
{
	return *this = *this - obj;
}

Vector& Vector::operator*(Vector obj)
{
	Vector temp;
	int arr[2][3];
	arr[0][0] = this->a;
	arr[0][1] = this->b;
	arr[0][2] = this->c;
	arr[1][0] = obj.a;
	arr[1][1] = obj.b;
	arr[1][2] = obj.c;
	temp.a = arr[0][1] * arr[1][2] - arr[1][1] * arr[0][2];
	temp.b = -(arr[0][0] * arr[1][2] - arr[1][0] * arr[0][2]);
	temp.c = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];

	return temp;
}

Vector& Vector::operator*=(Vector obj)
{

	return *this = *this * obj;
}

Vector& Vector::operator*(double number)
{

	Vector temp;
	temp.a = this->a * number;
	temp.b = this->b * number;
	temp.c = this->c * number;

	return temp;
}

Vector& Vector::operator*=(double number)
{
	return *this = *this * number;
}


Vector& Vector::operator/(double number)
{
	Vector temp;
	temp.a = this->a / number;
	temp.b = this->b / number;
	temp.c = this->c / number;

	return temp;
}

Vector& Vector::operator/=(double number)
{
	return *this = *this / number;
}

double Vector::operator^(Vector obj)
{
	return (this->a * obj.a + this->b * obj.b + this->c * obj.c) / sqrt(pow(this->a, 2) + pow(this->b, 2) + pow(this->c, 2)) / sqrt(pow(obj.a, 2) + pow(obj.b, 2) + pow(obj.c, 2));
}

bool Vector::operator==(Vector obj)
{
	if (long_of_vector(*this) == long_of_vector(obj))return true;
	return false;
}

bool Vector::operator>(Vector obj)
{
	if (long_of_vector(*this) > long_of_vector(obj))return true;
	return false;
}

bool Vector::operator>=(Vector obj)
{
	if (long_of_vector(*this) >= long_of_vector(obj))return true;
	return false;
}

bool Vector::operator<(Vector obj)
{
	if (long_of_vector(*this) < long_of_vector(obj))return true;
	return false;
}

bool Vector::operator<=(Vector obj)
{
	if (long_of_vector(*this) <= long_of_vector(obj))return true;
	return false;
}

ostream& operator<<(ostream& out, Vector obj)
{
	cout << obj.a << " " << obj.b << " " << obj.c << endl;
	return out;
}

istream& operator>>(istream& in, Vector& obj)
{
	setlocale(LC_ALL, "ru");
	cout << "¬ведите координаты вектора\n";
	cin >> obj.a >> obj.b >> obj.c;
	return in;
}


double long_of_vector(Vector obj)
{
	double  long_of_vector;
	long_of_vector = sqrt(pow(obj.a, 2) + pow(obj.b, 2) + pow(obj.c, 2));
	return long_of_vector;
}

