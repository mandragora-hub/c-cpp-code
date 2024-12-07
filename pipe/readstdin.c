#include <stdlib.h>
#include <stdio.h> 	/* for printf */
#include <string.h>	/* for strlen */

int main(int argc, char **argv) {
	int n;
	char buf[1025];

	// 0 is the file descriptor for the stdin
	if ((n = read(0, buf, 1024)) >= 0) {
		buf[n] = 0;	/* terminate the string */
		printf("read %d bytes from the stdin: \"%s\"\n", n, buf);
	} else {
		perror("read");
	}

	exit(0);
}

