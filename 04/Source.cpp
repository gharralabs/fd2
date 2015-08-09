#include <iostream>

int main()
{
	FILE* arquivo;
	fopen_s(&arquivo, "c:/meuarquivo.txt", "r");

	char letra;

	while ((letra = fgetc(arquivo)) != EOF)
	{
		printf("%c", letra);
	}

	fclose(arquivo);
	return 0;
}