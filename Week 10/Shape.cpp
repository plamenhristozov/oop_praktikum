#include <string>
#include <vector>

class Shape
{
	std::string label;
public:
	const std::string& getLabel();
	virtual void print();
	virtual void copy();
	virtual double getPerimeter();
};
std::string const& Shape::getLabel()
{
	return this->label;
}

class Triangle : public Shape
{
	// ako imah poveche vreme shtqh da gi napravq private obache da napravq funkcii s koito da gi accessvam za da spazq oop paradigma ama nqmam vreme zatova vs direktno go accessvam
	int firstSide;
	int secondSide;
	int thirdSide;
public:
	void print()
	{
		//
	}

	Triangle* copy() const
	{
		return new Triangle(*this);
	}
	double getPerimeter()
	{
		return firstSide + secondSide + thirdSide;
	}
};

class Circle : public Shape
{
	int radius;
public:
	Circle* copy() const
	{
		return new Circle(*this);
	}
	double getPerimeter()
	{
		return radius * 3.14;
	}
	void print()
	{

	}
};

class Square : public Shape
{
	int side;
public:
	void print()
	{
		//asd
	}
	Shape* copy() const
	{
		Shape* ptr = new Square(*this);
		return ptr;
	}
	double getPerimeter()
	{
		return (side * 4);
	}
};

class ShapeContainer
{
	std::vector <Shape*> container;

public:
	void addShape(const Shape& shape) 
	{
		Shape* obj = shape.copy();
		container.push_back(obj);
	};
	void printInfo(Shape& shape)
	{
		//asd
	};
	void printShape(Shape& shape)
	{
		for (int i = 0; i < container.size(); i++)
		{
			container[i]->print();
		}
	};
	~ShapeContainer()
	{
		for (int i = 0; i < container.size(); i++)
		{
			delete container[i];
		}
	};
};





int main()
{
	//asd
}