#include <iostream>
#include "Not.h"
#include "Nand.h"
#include "And.h"
#include "Nor.h"
#include "Or.h"
#include "Xor.h"
#include "Xnor.h"
#include "Decoder2.h"

using namespace std;

void testGate(LogicGate* gate)
{
	Wire* wireA = gate->getWireIn1();
	Wire* wireB = gate->getWireIn2();
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
	Wire* wireA = gate.getWireIn1();
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

void testDecoder()
{
	cout << "DECODER:" << endl;
	Decoder2 decode;
	Wire wireOut0;
	Wire wireOut1;
	Wire wireOut2;
	Wire wireOut3;
	Wire* wireIn1 = decode.getWireIn1();
	Wire* wireIn2 = decode.getWireIn2();
	
	decode.setDrain(&wireOut0, 0);
	decode.setDrain(&wireOut1, 1);
	decode.setDrain(&wireOut2, 2);
	decode.setDrain(&wireOut3, 3);

	cout << "0&0" << endl;
	wireIn1->setSource(false);
	wireIn2->setSource(false);
	cout << "Status:";
	cout << wireOut0.getOutput() << wireOut1.getOutput() << wireOut2.getOutput() << wireOut3.getOutput() << endl;

	cout << "0&1" << endl;
	wireIn1->setSource(true);
	wireIn2->setSource(false);
	cout << "Status:";
	cout << wireOut0.getOutput() << wireOut1.getOutput() << wireOut2.getOutput() << wireOut3.getOutput() << endl;

	cout << "1&0" << endl;
	wireIn1->setSource(false);
	wireIn2->setSource(true);
	cout << "Status:";
	cout << wireOut0.getOutput() << wireOut1.getOutput() << wireOut2.getOutput() << wireOut3.getOutput() << endl;

	cout << "1&1" << endl;
	wireIn1->setSource(true);
	wireIn2->setSource(true);
	cout << "Status:";
	cout << wireOut0.getOutput() << wireOut1.getOutput() << wireOut2.getOutput() << wireOut3.getOutput() << endl;

	cout << Wire::updateCount << endl;
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
	testDecoder();
	system("PAUSE");
}