#pragma once
#include "talent.h"

class Swiming final : public Talent
{
public:
	virtual ~Swiming();
	virtual std::string getTalent() const override;
};