#include <iostream>
#include "Animals.hpp"


class A {
private:
	int variable;
public:
	A() {
		std::cout << "Конструктор А\n";
		variable = 0;
	}

	A(int var) {
		std::cout << "Конструктор А\n";
		variable = var;
	}

	~A() {
		std::cout << "Деструктор А\n";
	}

	int getVar() { return variable;  }
};

class B : public A{
private:
	int size;
public:
	B() {
		std::cout << "Конструктор B\n";
		size = 0;
	}

	B(int num1, int num2) : A(num1) {
		std::cout << "Конструктор B\n";
		size = num2;
	}

	~B() {
		std::cout << "Деструктор B\n";
	}

	void print() {
		std::cout << "Variable = " << getVar() << std::endl;
		std::cout << "Size = " << size << std::endl;
	}
};

int main() {
	setlocale(LC_ALL, "russian");
	

	B b1;
	B b2(10, 20);
	b1.print();
	b2.print();

	Cat cat("Cheetos");
	Fish fish("Mermaid");
	Parrot parrot("Yago");

	cat.runTo("Bathroom");
	fish.swimTo("Florida");
	parrot.flyTo("Equador");

	cat.makeSound();
	fish.makeSound();
	parrot.makeSound();


	return 0;
}