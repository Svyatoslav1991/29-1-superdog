#pragma once
#include "talent.h"

class Counting final : public Talent
{
public:
	virtual ~Counting();
	virtual std::string getTalent() const override;
};