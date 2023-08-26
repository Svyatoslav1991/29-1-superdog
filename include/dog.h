#pragma once
#include "animal.h"
#include "talent.h"
#include <memory>
#include <vector>

class Dog final : public Animal
{
public:
	Dog(std::string name);
	virtual ~Dog();

	virtual void voice() override;
	virtual void show_talents() const override;
	virtual void add_talent(std::unique_ptr<Talent> talent) override;

private:
	std::vector<std::unique_ptr<Talent>> m_vTalents;
};