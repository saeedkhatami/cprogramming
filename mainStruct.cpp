#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int pid;
	char ptype;
	float cputime;
} process_info_struct;

int main(int argc, char *argv[]) {
	process_info_struct p1;
	
	printf("Address of pid:        %p\n", &p1.pid);
	printf("Address of ptype:      %p\n", &p1.ptype);
	printf("Address of cputime:    %p\n", &p1.cputime);
	
	return 0;
}
