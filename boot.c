#include <stdlib.h>
#include <iostream>


int main(int argc, char* argv[]){
	if(argc != 2){
		printf("Usage: ./config-man <target_directory>\n");
		return -1;
	}

	std::string pwd(argv[1]);
	std::string cmd = "npm --prefix " + pwd + "/src start";

	system(cmd.c_str());

	return 0;
}
