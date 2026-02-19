🎖️ Technova - Missão War (Novato)
Este projeto é um sistema de gerenciamento de frentes de batalha desenvolvido em Linguagem C. Ele foi criado como parte dos meus estudos iniciais em programação, focando na organização de dados estruturados e manipulação de vetores.

O objetivo do programa é permitir o cadastro rápido de territórios estratégicos, associando-os a uma cor de exército e à quantidade de tropas disponíveis, gerando um relatório consolidado ao final.

🚀 Funcionalidades
Agrupamento por Struct: Organização lógica de nome, cor do exército e quantidade de tropas.

Vetor de Objetos: Gerenciamento simultâneo de 5 territórios distintos.

Tratamento de Localidade: Suporte a caracteres especiais e acentuação no terminal Windows através da locale.h.

Segurança de Memória: Uso de limites de leitura no scanf para evitar buffer overflow.

🛠️ Tecnologias e Bibliotecas
<stdio.h>: Entrada e saída padrão.

<string.h>: Manipulação de cadeias de caracteres.

<locale.h> & <windows.h>: Ajustes de codificação para o padrão brasileiro (UTF-8/CP1252).

📋 Como Executar
Nota: Este projeto foi otimizado para compiladores Windows (como MSVC ou GCC via MinGW), devido ao uso da biblioteca windows.h.

Clone o repositório:

Bash
git clone https://github.com/seu-usuario/nome-do-repo.git
Abra o arquivo .c no seu ambiente (Visual Studio, Code::Blocks ou Dev-C++).

Compile e execute.

Insira os dados conforme solicitado no terminal.

🧠 Exemplo de Estrutura
C
struct Territorio {
    char nome[30];  // Ex: Alasca
    char cor[10];   // Ex: Vermelho
    int tropas;     // Ex: 15
};
⭐ Desenvolvido para estudos de lógica e estruturas de dados em C.
