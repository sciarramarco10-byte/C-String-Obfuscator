C-String-Obfuscator 🔐

Um ofuscador de strings leve escrito em C, desenvolvido como prova de conceito para estudos de cibersegurança e manipulação direta de memória.

## ⚙️ Funcionalidades e Lógica
* **Entrada Segura:** Utiliza `fgets` em vez de `scanf` na captura da senha para limitar o tamanho da leitura e prevenir vulnerabilidades clássicas de Buffer Overflow[cite: 9].
* **Ofuscação ASCII:** Implementa um loop `for` que percorre o array de caracteres até identificar o terminador nulo (`\0`). A ofuscação ocorre somando um valor (+3) diretamente à tabela ASCII de cada letra na memória, simulando técnicas básicas de evasão.

Como compilar e rodar
  bash
gcc ofuscador.c -o ofuscador
./ofuscador
