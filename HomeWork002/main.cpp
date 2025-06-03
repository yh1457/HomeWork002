
#include<iostream>

class Animal
{
public:
	virtual void MakeSound() = 0;
};

class Dog : public Animal
{
public:
	virtual void MakeSound() override
	{
		std::cout << "¿Ð¿Ð!" << std::endl;
	}
};

class Cat : public Animal
{
public:
	virtual void MakeSound() override
	{
		std::cout << "¾ß~¿Ë" << std::endl;
	}
};

class Cow : public Animal
{
public:
	virtual void MakeSound() override
	{
		std::cout << "À½¸Å~" << std::endl;
	}
};

int main()
{
	// 1¹ø °úÁ¦.
	Animal* animals[3];

	Dog* dog = new Dog();
	Cat* cat = new Cat();
	Cow* cow = new Cow();

	animals[0] = dog;
	animals[1] = cat;
	animals[2] = cow;

	for (int i = 0; i < 3; ++i)
	{
		animals[i]->MakeSound();
	}

	delete dog;
	delete cat;
	delete cow;

}