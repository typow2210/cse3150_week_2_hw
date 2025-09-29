#include "greeting_utils.h"
#include <iostream>
#include <string>

int main(){
	std::cout << "Enter your name" << std::endl;
	std::string name; 	
	std::getline(std::cin, name);
       	const std::string constname = name;	
	const std::string msg = GreetingUtils::create_message(constname);
	char* msg_as_c = GreetingUtils::format_as_c_string(msg);
	std::cout << msg_as_c << std::endl; 
	delete[] msg_as_c; 	
	return 0;
}
