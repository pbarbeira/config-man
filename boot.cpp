#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
	if(argc != 2){
		std::cout << "Usage: ./config-man <target-dir>\n";
		return 1;
	}
	
	std::string pwd(argv[1]);
	
	std::string code = 
		"#include <iostream>\n\nint main(){\n\tstd::string cmd = \"npm --prefix " 
		+ pwd + " start\";\n\tsystem(cmd.c_str());\n\n\treturn 0;\n}";

	std::ofstream file("./config-boot.cpp");
	if(file.is_open()){
		file << code;	
	}else{
		std::cout << "Error\n";
	}

	
	return 0;
}
