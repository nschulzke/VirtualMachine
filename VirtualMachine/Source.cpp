#include <iostream>
#include "Not.h"
#include "Nand.h"
#include "And.h"
#include "Nor.h"
#include "Or.h"
#include "Xor.h"
#include "Xnor.h"

using namespace std;

void testGate(LogicGate* gate)
{
	Wire* wireA = gate->getWire1();
	Wire* wireB = gate->getWire2();
	wireA->setSource(false);
	wireB->setSource(false);
	cout << "0&0:" << gate->getOutput() << endl;
	wireA->setSource(false);
	wireB->setSource(true);
	cout << "0&1:" << gate->getOutput() << endl;
	wireA->setSource(true);
	wireB->setSource(false);
	cout << "1&0:" << gate->getOutput() << endl;
	wireA->setSource(true);
	wireB->setSource(true);
	cout << "1&1:" << gate->getOutput() << endl;
	cout << endl;
}

void testNot()
{
	cout << "NOT:" << endl;
	Not gate;
	Wire* wireA = gate.getWire1();
	wireA->setSource(false);
	cout << "0:" << gate.getOutput() << endl;
	wireA->setSource(true);
	cout << "1:" << gate.getOutput() << endl;
	cout << endl;
}

void testNand()
{
	cout << "NAND:" << endl;
	Nand gate;
	testGate(&gate);
}

void testAnd()
{
	cout << "AND:" << endl;
	And gate;
	testGate(&gate);
}

void testNor()
{
	cout << "NOR:" << endl;
	Nor gate;
	testGate(&gate);
}

void testOr()
{
	cout << "OR:" << endl;
	Or gate;
	testGate(&gate);
}

void testXor()
{
	cout << "XOR:" << endl;
	Xor gate;
	testGate(&gate);
}

void testXnor()
{
	cout << "XNOR:" << endl;
	Xnor gate;
	testGate(&gate);
}

int main()
{
	testNot();
	testNand();
	testAnd();
	testNor();
	testOr();
	testXor();
	testXnor();
	system("PAUSE");
}