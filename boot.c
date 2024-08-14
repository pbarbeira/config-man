#include <stdio.h>

int main(int argc, char* argv[]){
	if(argc != 2){
		printf("Usage: ./config-man <target_directory>\n");
		return -1;
	}
	printf("%s\n", argv[1]);

	return 0;
}
