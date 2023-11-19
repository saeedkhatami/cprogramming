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
	
	printf("--------------------------------\n");
	printf("struct size:           %lu \n", sizeof(p1));
	printf("Address of pid:        %p\n", &p1.pid);
	printf("Address of ptype:      %p\n", &p1.ptype);
	printf("Address of cputime:    %p\n", &p1.cputime);
	printf("--------------------------------\n");
	printf("union size:            %lu \n", sizeof(p2));
	printf("Address of pid:        %p\n", &p2.pid);
	printf("Address of ptype:      %p\n", &p2.ptype);
	printf("Address of cputime:    %p\n", &p2.cputime);
	printf("--------------------------------\n");
	return 0;
}
