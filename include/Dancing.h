#pragma once
#include "talent.h"

class Dancing final : public Talent
{
public:
	virtual ~Dancing();
	virtual std::string getTalent() const override;
};