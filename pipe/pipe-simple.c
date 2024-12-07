#include <stdlib.h>
#include <stdio.h> 	/* for printf */
#include <string.h>	/* for strlen */

int main(int argc, char **argv) {
	int n;
	int fd[1];
	char buf[1025];
	char *data = "hello... this is sample data";

	printf("Address mem fd[0]: %p\n", &fd[0]);
	printf("Address mem fd[1]: %p\n", &fd[1]);

	pipe(fd);
	write(fd[1], data, strlen(data));
	if ((n = read(fd[0], buf, 1024)) >= 0) {
		buf[n] = 0;	/* terminate the string */
		printf("read %d bytes from the pipe: \"%s\"\n", n, buf);
	} else {
		perror("read");
	}

	exit(0);
}

