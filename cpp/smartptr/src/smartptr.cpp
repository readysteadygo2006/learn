//============================================================================
// Name        : smartptr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

struct Hen
{
		unsigned 	id;
		float		eggs;

		Hen(unsigned id_, float eggs_) :
			id   { id_ },
			eggs { eggs_ }
		{
		}
};

int main() {

	unique_ptr<Hen> hen = {new Hen(1, 5.6f)};

	auto hen2 = move(hen);

	return 0;
}
