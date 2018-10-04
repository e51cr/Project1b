// Elena Cruz
// CS 20A
// Assignment 1
// Part 1: Base class: Shape. With derived classes: Triangle and Rectangle.

/*Write a program that defines a Shape class with a constructor 
Create two child classes triangle and rectangle,
that calculate the area of the shape(Name of the function should be area)
In the main, define two variables a triangle and a rectangle
and then call the area() function for width = 10 and height = 20 in this two variables */


#include <iostream>
using namespace std;


class Shape
{
private:
	double width;
	double height;

public:
	Shape()
	{
	}
	Shape(double width, double height)
	{
		this->width = width;
		this->height = height;
	}

	void setWidth(double shapeWidth)
	{
		width = shapeWidth;
	}
	double getWidth()
	{
		return width;

	}
	void setHeight(double shapeHeight)
	{
		height = shapeHeight;
	}
	double getHeight()
	{
		return height;
	}

};

class Triangle: public Shape
{
public:
	void area() //how to use and set area. print area as well
	{
		double area = 0.5*(getWidth()*getHeight());
		cout << "The area of our triangle is " << area << "."<< endl;
	}
	
};

class Rectangle : public Shape
{
public:
	void area()
	{
		double area = getWidth()*getHeight();
		cout << "And the area of our rectangle is " << area << "."<< endl;
	}

};


int main()
{	
	Shape shape;
	Triangle triangle;
	Rectangle rectangle;

	double widthX = 10;
	double heightY = 20;

	cout << "We have two shapes! " << endl;
	cout << "We have a triangle and a rectangle!" << endl;
	cout << "Our shapes have a width of " << widthX << " and a height of " << heightY << "." << endl;
	

	shape.setWidth(widthX);
	shape.setHeight(heightY);
	triangle.setWidth(widthX);
	triangle.setHeight(heightY);
	triangle.area();
	rectangle.setWidth(widthX);
	rectangle.setHeight(heightY);
	rectangle.area();

	return 0;
}


