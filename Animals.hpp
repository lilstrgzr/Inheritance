#pragma once
#include<string>

class Animal {
protected:
	std::string name;
	double weight;
public:
	Animal();

	Animal(std::string name, double weight = 0.);

	void makeSound();

};

class Cat : public Animal {
public:
	Cat() = default;

	Cat(std::string name, double weight = 0.);

	void runTo(std::string place);

	void makeSound();
};

class Fish : public Animal {
public:
	Fish() = default;

	Fish(std::string name, double weight = 0.);

	void swimTo(std::string place);

	void makeSound();
};

class Parrot : public Animal {
public:
	Parrot() = default;

	Parrot(std::string name, double weight = 0.);

	void flyTo(std::string place);

	void makeSound();
};