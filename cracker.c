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
                	printf("Error al abrir el diccionario, prueba con otro.\n");
        	}
		if (strcmp(argv[3], "MD5") == 0)
			md5Crack(len, read, ptr, line, argv[1]);
		if (strcmp(argv[3], "SHA256") == 0)
			sha256Crack(len, read, ptr, line, argv[1]);
		else
			printf("No hemos implementado ese algoritmo aún.\n");
		return (0);
	}
	printf("Checkea los parámetros!\n");
	return (0);
}
