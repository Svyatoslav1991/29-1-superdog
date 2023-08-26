#include "..\include\dog.h"

Dog::Dog(std::string name) : Animal(name)
{
}

///////////////////////////////////////////////////////////////////////////

Dog::~Dog()
{

}

///////////////////////////////////////////////////////////////////////////

void Dog::voice()
{
	std::cout << "Bark!\n";
}

///////////////////////////////////////////////////////////////////////////

void Dog::show_talents() const
{
	std::cout << "\nThis is " << m_name;
	if (m_vTalents.empty())
	{
		std::cout << " and it doesn't have any talents\n";
	}
	else
	{
		std::cout << " and it has some talents\n";
		for (const auto& it : m_vTalents)
		{
			std::cout << "\tIt can \"" << it->getTalent() << "\"\n";
		}
	}
}

///////////////////////////////////////////////////////////////////////////

void Dog::add_talent(std::unique_ptr<Talent> talent)
{
	if (m_vTalents.size() == 3)
	{
		std::cout << m_name << " already has this talent\n";
		return;
	}

	for (const auto& it : m_vTalents)
	{
		if (it->getTalent() == talent->getTalent())
		{
			std::cout << m_name << " already has this talent\n";
			return;
		}
	}

	m_vTalents.push_back(std::move(talent));
}