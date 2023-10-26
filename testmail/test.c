#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
	char *filename = "../vfs/foo";
	int my_file_desc = open(filename, O_WRONLY|O_CREAT, 0600);
	char *p = strdup("This is an email from group iloveos.");
	int write_len = strlen(p);
	int w = write(my_file_desc, p, write_len);
	close(my_file_desc);
	return 0;
}
