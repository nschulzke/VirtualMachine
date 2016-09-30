#pragma once

class Circuit
{
public:
	explicit Circuit() : source(false), drain(nullptr) {};
	virtual void setSource(bool bitIn) = 0;
	virtual void setDrain(Circuit* target) = 0;
protected:
	bool source;
	Circuit* drain;
};