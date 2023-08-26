#include "..\include\animal.h"

Animal::Animal(std::string name)
{
	if (name.empty())
	{
		m_name = "unknown";
	}
	else
	{
		m_name = name;
	}
}

///////////////////////////////////////////////////////////////////////////

Animal::~Animal()
{

}
