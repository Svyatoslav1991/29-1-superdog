#pragma once
#include <iostream>

class Talent 
{
public:
	virtual ~Talent() = 0;
	virtual std::string getTalent() const = 0 ;
};