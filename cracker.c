#include "md5.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
        FILE* ptr;
        char * line = NULL;
        size_t len = 0;
        ssize_t read;
        int lenL = 0;
        int cracked = 0;

        ptr = fopen(argv[2], "r");
        if (NULL == ptr) {
                printf("File can't be opened, try again with another file.\n");
        }
        while ((read = getline(&line, &len, ptr)) != -1) {
                lenL = strlen(line);
                if(line[lenL-1] == '\n')
                        line[lenL-1] = 0;
                if ((lenL - 1 > 0) && strcmp(md5(line, lenL), argv[1]) == 0)
                {
                        printf("Hash Cracked!: %s = %s\n", argv[1], line);
                        cracked = 1;
                        break;
                }
        }
        if (cracked == 0)
                printf("The Cracking has failed, try another dictionary");
        fclose(ptr);
        if (line)
                free(line);
        exit(EXIT_SUCCESS);
        return 0;
}
