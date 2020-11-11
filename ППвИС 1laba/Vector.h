#pragma once
#include <iostream>
#include <math.h>
using namespace std;

/**
@mainpage Laboratory work #1
*/
class Vector {
	double a, b, c;
public:
	/**
	@param The coordinates of vector. 
	*/
	Vector();
	/**
	@param The coordinates of vector.
	*/
	Vector(double i, double j, double k);
	/**
	@brief We overload the operator+ . Add each coordinate of two vectors together.
	@return Return the coordinates of the resulting vector
	*/
	Vector& operator+(Vector obj);
	/**
	@brief We overload the operator= . The undetected value is assigned the value of the revealed.
	@return Returns an undefined value.
	*/
	Vector& operator=(Vector obj);
	/**
	@brief We overload the operator+=. Makes addition of coordinates of two vectors and assignment.
	@return Returns the result of vector  coordinate .
	*/
	Vector& operator+=(Vector obj);
	/**
	@brief We overload the  operator-. Subtracts each coordinate of two vectors together.
	@return Return the coordinates of the resulting vector
	*/
	Vector& operator-(Vector obj);
	/**
	@brief We overload the  operator-=. Make subtraction of coordinates of two vectors and assignment.
	@return Returns the result of vector  coordinate .
	*/
	Vector& operator-=(Vector obj);
	/**
	@brief We overload the  operator*.Creates a 2x3 matrix where row is all coordinates of one vector.Then the vector product is performed.
	@return Returns the coordinates of the resulting vector.
	*/
	Vector& operator*(Vector obj);
	/**
	@brief We overload the  operator*=. Makes addition of coordinates of two vectors and assignment.
	@return Returns the result of vector  coordinate .
	*/
	Vector& operator*=(Vector obj);
	/**
	@brief We overload the  operator*. Makes addition of coordinates vector on number.
	@return Returns the coordinates of the resulting vector.
	*/
	Vector& operator*(double number);
	/**
	@brief We overload the  operator*=. Makes addition of coordinates vector on number and assignment.
	@return Returns the result of vector  coordinate .
	*/
	Vector& operator*=(double number);
	/**
	@brief We overload the  operator/. Makes division of coordinates vector on number.
	@return  Returns the coordinates of the resulting vector.
	*/
	Vector& operator/(double number);
	/**
	@brief We overload the  operator/=. Makes division of coordinates vector on number and assignment.
	@return Returns the result of vector  coordinate .
	*/
	Vector& operator/=(double number);
	/**
	@brief We overload the  operator^. Used to determine the cosine between two vectors.
	@return Returns the cosine.
	*/
	double operator^(Vector obj);
	/**
	@brief We overload the  operator==. Compares the length of the vectors.
	@return If they are equal gives - true, if not -false
	*/
	bool operator==(Vector obj);
	/**
	@brief We overload the  operator>. Compares the length of the vectors.
	@return If one vector is larger than the other gives - true, if not -false
	*/
	bool operator>(Vector obj);
	/**
	@brief We overload the  operator>=. Compares the length of the vectors.
	@return If one vector is larger or equal than the other  gives - true, if not -false
	*/
	bool operator>=(Vector obj);
	/**
	@brief We overload the  operator<. Compares the length of the vectors.
	@return If one vector is less  than the other  gives - true, if not -false
	*/
	bool operator<(Vector obj);
	/**
	@brief We overload the  operator<=. Compares the length of the vectors.
	@return If one vector is less  or equal than the other  gives - true, if not -false
	*/
	bool operator<=(Vector obj);
	/**
	@brief A function that calculates the length of a vector
	@return Returns length of a vector
	*/
	friend double long_of_vector(Vector obj);
	/**
	@brief
	@return
	*/
	friend ostream& operator<<(ostream& out, Vector obj);
	/**
	@brief
	@return
	*/
	friend istream& operator>>(istream& in, Vector& obj);

};

