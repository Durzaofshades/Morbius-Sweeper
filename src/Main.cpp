#include "appWrapper.hpp"
#include "Test.hpp"

int main() {
	int errors;
	if (TESTING == true) {
		std::cout << "Testing Mode: Disable in Header File\n";
		errors = TEST_all();
		std::cout << "Number of Test Errors:" << errors;
	}
	else {
		app_wrapper();
	}
	return 0;
}