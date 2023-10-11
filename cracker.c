#include "md5.h"
#include "sha256.h"

int main(int argc, char **argv)
{
        FILE* ptr;
        char * line = NULL;
        size_t len = 0;
        ssize_t read;
        int cracked = 0;
	if (argc == 4)
	{
        	ptr = fopen(argv[2], "r");
        	if (NULL == ptr) {
                	printf("File can't be opened, try again with another file.\n");
        	}
		if (strcmp(argv[3], "MD5") == 0)
			md5Crack(len, read, ptr, line, argv[1]);
		if (strcmp(argv[3], "SHA256") == 0)
			sha256Crack(len, read, ptr, line, argv[1]);
		else
			printf("We havent implemented that hash yet, try another one\n");
		return (0);
	}
	printf("Check all the params again.\n");
	return (0);
}
