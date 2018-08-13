#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

class Shape {
public:
	Shape();
	Shape(string sName, string sColor);

	string getName();
	void setName(string);
	string getColor();
	void setColor(string);
	virtual void calculateArea() = 0;
	virtual void display();
protected:
	string name;
	string color;
private:
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(string rName, string rColor, double rWidth, double rHeight);
	double getWidth();
	void setWidth(double rWidth);
	double getHeight();
	void setHeight(double rHeight);
	void calculateArea() override;
	void display() override;
private:
	double width;
	double height;
	double area;
};

class Circle : public Shape {
public:
	Circle();
	Circle(string cName, string cColor, double cRadius);
	double getRadius();
	void setRadius(double);
	void calculateArea() override;
	void display() override;
private:
	double radius;
	double area;
};

// Add Triange shape (with base and height)
//  similar to Rectangle and Circle.
class Triangle : public Shape {
public:
	Triangle();
	Triangle(string tName, string tColor, double tWidth, double tHeight);
	double getWidth();
	void setWidth(double tWidth);
	double getHeight();
	void setHeight(double tHeight);
	void calculateArea() override;
	void display() override;
private:
	double width;
	double height;
	double area;
};

#endif  // SHAPES_H
