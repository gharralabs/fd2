#include <iostream>

int main()
{
	FILE* arquivo;
	fopen_s(&arquivo, "c:/meuarquivo.txt", "r");

	char letra;
	for (int i = 0; i < 5; i++)
	{
		letra = fgetc(arquivo);
		printf("%c\n", letra);
	}

	fclose(arquivo);

	system("pause");
	return 0;
}