// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	char texto[100];
	printf("Digite um texto: ");
	gets_s(texto);

	int t = strlen(texto);
	FILE* arquivo;
	
	errno_t erro = fopen_s(&arquivo, "c:/meuarquivo.txt", "w");

	if (arquivo == nullptr)
	{
		printf("Ocorreu um erro ao abrir o arquivo: %d", erro );
		return erro;
	}

	for (int i = 0; i < strlen(texto); i++)
	{
		fputc(texto[i], arquivo);
	}

	fclose(arquivo);

	return 0;
}