#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct{
	uint16_t pid;
	uint8_t ptype;
	uint32_t cputime;
} process_info_struct;

typedef union{
	uint16_t pid;
	uint8_t ptype;
	uint32_t cputime;
} process_info_union;

int main(int argc, char *argv[]) {
	process_info_struct p1;
	process_info_union p2;
	
	p1.cputime = 4000000000;
	p1.ptype = 'A';
	
	p2.cputime = 4000000000;
	p2.ptype = 'A';
	
	printf("p1.cputime:           %lu \n", p1.cputime);
	printf("p1.ptype:             %c \n", p1.ptype);
	printf("--------------------------------\n");
	printf("p2.cputime:           %lu \n", p2.cputime);
	printf("p2.ptype:             %c \n", p2.ptype);
	
	return 0;
}
