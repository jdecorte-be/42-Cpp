#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
  int r = rand() % 3;
  if (r == 0)
  {
    std::cout << "create A\n";
    return (new A());
  }
  else if (r == 1)
  {
    std::cout << "create B\n";
    return (new B());
  }
  else
  {
    std::cout << "create C\n";
    return (new C());
  }
}

void identify(Base *p)
{
  if (dynamic_cast<A *>(p) != nullptr)
    std::cout << "A\n";
  else if (dynamic_cast<B *>(p) != nullptr)
    std::cout << "B\n";
  else if (dynamic_cast<C *>(p) != nullptr)
    std::cout << "C\n";
}

void identify(Base & p)
{
  identify(&p);
}

int main(void)
{
	std::srand(std::time(0)); // need to call this before calling std::rand()

	// 3 random Base children
	std::cout << "4 RANDOM BASE CHILDREN:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base *rand4 = generate();
	std::cout << std::endl << std::endl;

	// Create references
	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;
	Base &rand4_ref = *rand4;

	std::cout << "IDENTIFY VIA ADDRESS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1);
	identify(rand2);
	identify(rand3);
	identify(rand4);
	std::cout << std::endl << std::endl;

	std::cout << "IDENTIFY VIA REFERENCE:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	identify(rand4_ref);
	std::cout << std::endl << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete rand1;
	delete rand2;
	delete rand3;
	delete rand4;
	std::cout << std::endl << std::endl;
	return (0);
}