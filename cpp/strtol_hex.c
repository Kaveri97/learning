#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int var;
    char *err = NULL;

    if (argc != 2) {
        fprintf(stderr, "<%s> int-var (in hexadecimal)\n", argv[0]);
        return -1;
    }

    var = strtol(argv[1], &err, 16);
    if (err && (err[0] != '\0')) {
        fprintf(stderr, "failed to parse input string to integer [%s]\n", argv[1]);
        return -1;
    }

    printf("var 0x%x\n", var);
    return 0;
}

