#define BUFFER_MAX_SIZE 200
#include <iostream>

int main()
{

	FILE* arquivo;
	errno_t e = fopen_s(&arquivo, "meuarquivo.txt", "w+");

	fputs("Voc� queria sair\n", arquivo);
	fputs("mas a �nica balada que vai ver no fim de semana\n", arquivo);
	fputs("� essa com as luzes do seu modem piscando.\n", arquivo);

	fflush(arquivo);
	rewind(arquivo);

	char texto[BUFFER_MAX_SIZE];

	while (fgets(texto, BUFFER_MAX_SIZE, arquivo) != nullptr)
	{
		printf("%s", texto);
	}

	fclose(arquivo);
	system("pause");
	return 0;
}