#include <common/utils.h>
#include "virtual/VirtualStudy.h"
#include <boost/shared_ptr.hpp>

using namespace cz;

int main(int argc, char** argv) {
	boost::shared_ptr<Base> base_ptr(new Derived());
	boost::shared_ptr<Derived> derived_ptr(new Derived());

	base_ptr->func1();
	base_ptr->func2();
	base_ptr->func3();
	base_ptr->func4();
	base_ptr->func5();

	derived_ptr->func1();
	derived_ptr->func2();
	derived_ptr->func3();
	derived_ptr->func4();
	derived_ptr->func5();

	//this is derived func1
	//this is derived func2
	//this is base func3
	//this is base func4
	//this is base func5

	//this is derived func1
	//this is derived func2
	//this is base func3
	//this is derived func4
	//this is base func5

	return 1;
}