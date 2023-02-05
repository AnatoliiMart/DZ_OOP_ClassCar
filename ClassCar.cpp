#include<iostream>
using namespace std;
class Door
{
public:
	void ItIsDoor()
	{
		cout << "It's car's door)))" << endl;
	}
	~Door() { cout << "Destruct Door" << endl; }
};
class Wheel
{
public:
	void ItIsWheel()
	{
		cout << "It's car's wheel. As ussuall car have four wheels)))" << endl;
	}
	~Wheel() { cout << "Destruct Wheel" << endl; }
};
class Engine
{
public:
	void ItIsEngine()
	{
		cout << "It's car's Engine. Brrr, Brrr, Brrr)))" << endl;
	}
	~Engine() { cout << "Destruct Engine" << endl; }
};
class Car: public Door, public Wheel, public Engine
{
public:

	void ItIsCar()
	{
		cout << "It's car)It consists of:" << endl;
		Car::ItIsWheel();
		Car::ItIsDoor();
		Car::ItIsEngine();
	}

	~Car() { cout << "Destruct Car" << endl; }
};

int main()
{
	Car car;
	car.ItIsCar();
	return 0;
}

