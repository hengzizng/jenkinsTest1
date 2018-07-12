#include <iostream>
#include <indurop/indurop.h>
#include <indurop/generated.h>

void main(void) {
	std::cout << ex::counter << std::endl;
	while(true) {
		ex::counter = ex::counter + 1;
		std::cout<<counter<<std::endl;
	}
}
