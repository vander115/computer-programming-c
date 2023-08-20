#include <stdio.h>
#include <stdarg.h>

void adicionarValorHistorico(const char* formato, ...) {
    va_list args;
    va_start(args, formato);

    FILE* arquivo = fopen("history.txt", "a+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de sa�da.\n");
        va_end(args);
        return;
    }

    vfprintf(arquivo, formato, args);

    fclose(arquivo);
    va_end(args);
}

void lerHistorico() {
    FILE* arquivo;
	arquivo = fopen("history.txt", "r"); // Abre o arquivo no modo "read"

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char linha[100]; // Buffer para armazenar cada linha do arquivo

    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha); // Exibe cada linha do arquivo
    }

    fclose(arquivo); // Fecha o arquivo
}

void cleanHistory() {
    FILE* arquivo;
	arquivo = fopen("history.txt", "w"); // Abre o arquivo no modo "write"

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fclose(arquivo); // Fecha o arquivo
}

int main() {
    adicionarValorHistorico("%d + %d = %d", 5, 3, 8);
    adicionarValorHistorico("10 - 4 = 6");
    adicionarValorHistorico("2 * 6 = 12");

    printf("Hist�rico:\n");
    lerHistorico();

//    apagarHistorico();

    return 0;
}

