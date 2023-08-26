#pragma once
#include <iostream>
#include "talent.h"

class Animal
{
public:
	Animal(std::string name);
	virtual ~Animal() = 0;

	virtual void voice() = 0;
	virtual void add_talent(std::unique_ptr<Talent> talent) = 0;
	virtual void show_talents() const = 0;

protected:
	std::string m_name;
};