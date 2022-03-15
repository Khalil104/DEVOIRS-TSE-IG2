#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
if (argc != 3)
{
fprintf(stderr, "Format : %s <parameter1><paramet­er2>\n", argv[0]);
return 1;
}
FILE *f1, *f2;
int ret;
f1 = fopen(argv[1], "r");
if (f1 == NULL)
{
printf("Error, can't open %s\n", argv[1]);
exit(1);
}

f2 = fopen(argv[2], "w");
if (f2 == NULL)
{
