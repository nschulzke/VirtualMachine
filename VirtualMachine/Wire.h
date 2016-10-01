#pragma once

class Wire
{
public:
	Wire(Wire* drainIn = nullptr, bool sourceIn = false) :
		source(sourceIn),
		drain(drainIn)
	{};
	virtual void setSource(bool bitIn);
	virtual void setDrain(Wire* target);
	virtual bool checkDrain() const;
	virtual bool getOutput() const;
protected:
	virtual void update();
	bool source;
	Wire* drain;
};