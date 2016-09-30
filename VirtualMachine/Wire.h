#pragma once

class Wire
{
public:
	explicit Wire() : source(false), drain(nullptr) {};
	virtual void setSource(bool bitIn);
	virtual void setDrain(Wire* target);
	virtual bool checkDrain() const;
	virtual bool getOutput() const;
protected:
	virtual void update();
	bool source;
	Wire* drain;
};