#include <iostream>
#include "greeting_utils.h"
#include <string>

namespace GreetingUtils{
	std::string create_message(const std::string& name){
		std::string ret = "Hello , " + name + "!";
		return ret;
	}

	char* format_as_c_string(const std::string& msg){
		int size = msg.length();
		char* arr = new char[size + 1];
		for(int i = 0; i < size; i++){
			arr[i] = msg.at(i);
		}
		arr[size] = '\0';
		return arr;
	}
}
