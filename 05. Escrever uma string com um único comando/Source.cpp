#include <iostream>

int main()
{
	FILE* arquivo;
	fopen_s(&arquivo, "c:/meuarquivo.txt", "w");

	char texto[100];
	printf("Digite o texto:");
	gets_s(texto);

	fputs(texto, arquivo);
	fclose(arquivo);

	return 0;
}