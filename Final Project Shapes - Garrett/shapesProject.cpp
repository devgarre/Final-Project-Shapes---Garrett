#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <fstream>
#include "shapes.h"
using namespace std;
void redrawShape();

vector<Shape *> shapeList;
Shape * shapePtr;

void main() {
	string inString1, inString2;
	double inValue1, inValue2;
	int choice;
	Rectangle * rectPtr;
	Circle * cirPtr;
	Triangle * triPtr;

	ofstream shapeFile;
	shapeFile.open("shapeList.txt");

	cout << "*** Welcome to Shapes program ***\n";

	do {
		cout << "\nMenu for entering shape:\n";
		cout << "1: To enter a rectangle\n";
		cout << "2: To enter a circle\n";
		cout << "3: To enter a triangle\n";
		cout << "4: To delete last entered shape\n";
		cout << "5: To display all shapes\n";
		cout << "90: To read shapes from file (input.txt)\n";
		cout << "91: To output shapes to file (output.txt)\n";
		cout << "99: Finish.\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Rectangle Name: ";
			cin >> inString1;
			cout << "Rectangle Color: ";
			cin >> inString2;
			cout << "Rectangle Width: ";
			cin >> inValue1;
			cout << "Rectangle Height: ";
			cin >> inValue2;
			rectPtr = new Rectangle(inString1, inString2, inValue1, inValue2);
			shapeList.push_back(rectPtr);
			break;
		case 2:
			cout << "Circle Name: ";
			cin >> inString1;
			cout << "Circle Color: ";
			cin >> inString2;
			cout << "Circle Radius: ";
			cin >> inValue1;
			cirPtr = new Circle(inString1, inString2, inValue1);
			shapeList.push_back(cirPtr);
			break;
		case 3:
			// to add input for Triange
			cout << "Triangle Name: ";
			cin >> inString1;
			cout << "Triangle Color: ";
			cin >> inString2;
			cout << "Triangle Width: ";
			cin >> inValue1;
			cout << "Triangle Height: ";
			cin >> inValue2;
			triPtr = new Triangle(inString1, inString2, inValue1, inValue2);
			shapeList.push_back(triPtr);
			break;
		case 4:
			// to delete last entered shape
			shapeList.pop_back();
			break;
		case 5:
			if (shapeList.size()) redrawShape();
			break;
		case 90:
			// to read shapes from file
			break;
		case 91:
			// to output shapes to file
			break;
		}

	} while (choice != 99);

	cout << "\nThank you for using this program.\n\n";
	system("pause");
}

void redrawShape() {
	cout << "\nThese are the shapes: " << endl;
	for (unsigned int i = 0; i < shapeList.size(); i++) {
		shapePtr = shapeList[i];
		shapePtr->display();
	}
}
