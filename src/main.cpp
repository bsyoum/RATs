#include <iostream>
#include <fstream>
#include <string>

using namespace std;

std::string runcmd(){
	std::string message = "Running command"; 
	return message;
}

int main(int argc, char *argv[]){
	while(true){
		std::string response;
		response = runcmd();
		if (response == "Running command"){
			std::cout << "Running command" << std::endl;
		}

		if (response == "no_cmd"){
			std::cout << "No Command" << std::endl;
		}
		else {
			
		}

	}
}
