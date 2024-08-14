#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* SUFFIX = "/src start";

int main(int argc, char* argv[]){
	if(argc != 2){
		printf("Usage: ./config-man <target_directory>\n");
		return -1;
	}

	char* cmd = "npm --prefix ";
	
	strncat(cmd, argv[1], strlen(argv[1]));
	
	//cmdSize = strlen(cmd) + strlen(SUFFIX);
	//cmd = strncat(cmd, SUFFIX, cmdSize);

	system(cmd);	

	return 0;
}
