#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include "shapes.h"
using namespace std;

Shape::Shape() {}
Shape::Shape(string sName, string sColor) {
	name = sName;
	color = sColor;
}

string Shape::getName() { return name; }
void Shape::setName(string sName) { name = sName; }

string Shape::getColor() { return color; }
void Shape::setColor(string sColor) { color = sColor; }

void Shape::display() {
	cout << "Shape: " << name << " with " << color << " color." << endl;
}

Rectangle::Rectangle() {}
Rectangle::Rectangle(string rName, string rColor, double rWidth, double rHeight)
	: Shape::Shape(rName, rColor)
{
	width = rWidth;
	height = rHeight;
}
double Rectangle::getWidth() { return width; }
void Rectangle::setWidth(double W) { width = W; }
double Rectangle::getHeight() { return height; }
void Rectangle::setHeight(double H) { height = H; }
void Rectangle::calculateArea() {
	area = width * height;
} //!!!!!!!!!!!!!!!!!
void Rectangle::display() {
	cout << "Rectangle: " << name << " with " << color << " color, "
		<< "and width = " << width << ", height = " << height << ", area = " << area << endl;
}

Circle::Circle() {}
Circle::Circle(string cName, string cColor, double cRadius)
	: Shape::Shape(cName, cColor) {
	radius = cRadius;
}
double Circle::getRadius() { return radius; }
void Circle::setRadius(double R) { radius = R; }
void Circle::calculateArea() {
	area = pow(radius, 2) * M_PI;
} //!!!!!!!!!!!!!!!!!
void Circle::display() {
	cout << "Circle: " << name << " with " << color << " color, "
		<< "and radius = " << radius << ", area = " << area << endl;
}

Triangle::Triangle() {}
Triangle::Triangle(string tName, string tColor, double tWidth, double tHeight)
	: Shape::Shape(tName, tColor) {
	width = tWidth;
	height = tHeight;
}
double Triangle::getWidth() { return width; }
void Triangle::setWidth(double W) { width = W; }
double Triangle::getHeight() { return height; }
void Triangle::setHeight(double H) { height = H; }
void Triangle::calculateArea() {
	area = width * height / 2;
}
void Triangle::display(){
	cout << "Triangle: " << name << " with " << color << " color, "
		<< "and width = " << width << ", height = " << height << ", area = " << area << endl;
}