fclose(f1);
printf("Error, can't open %s\n", argv[2]);
exit(2);
}
else
{
int current_char = 0;
while (1)
{
current_char = fgetc(f1);
fputc(current_char, f2);
// printf("%c", current_char);
if (current_char == EOF)
break;
}
}
printf("La copie s'est bien passée.\n");

fclose(f1);
fclose(f2);

return 0;
}
