#include "holberton.h"
#include "main.h"

void check_elf(unsigned char *e_ident)
{
        int index;

        for (index = 0; index < 4; index++)
        {
                if (e_ident[index] != 127 &&
                    e_ident[index] != 'E' &&
                    e_ident[index] != 'L' &&
                    e_ident[index] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}

