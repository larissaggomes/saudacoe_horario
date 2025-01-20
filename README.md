# Saudação Baseada no Horário

Este projeto é um exemplo de código em C que solicita o nome do usuário e a hora atual para fornecer uma saudação adequada, com base no horário informado (bom dia, boa tarde, ou boa noite).
📋 Funcionalidades

    Solicita o nome do usuário.
    Solicita a hora atual (em formato de 24 horas).
    Exibe uma saudação baseada no horário:
        Bom dia: Das 6:00 às 12:00
        Boa tarde: Das 13:00 às 17:00
        Boa noite: Das 18:00 às 23:00

🚀 Como executar o código

    Salve o código em um arquivo com a extensão .c.
    Compile o código usando um compilador C (como gcc):

gcc nome_do_arquivo.c -o saudacao

Execute o programa gerado:

    ./saudacao

    O programa pedirá para inserir o nome e a hora atual. Depois, exibirá a saudação correspondente ao horário.

📌 Exemplo de Saída

Se o usuário fornecer:

    Nome: João
    Hora: 15 (3:00 PM)

A saída será:

qual e seu nome? João
que horas sao? 15
boa tarde

🛠️ Tecnologias utilizadas

    Linguagem C: Para implementar a lógica de comparação do horário e a exibição das saudações.

⚠️ Observações

    O código usa uma comparação baseada em intervalos de horário fixos para determinar a saudação.
    O horário deve ser inserido no formato de 24 horas (de 0 a 23).
    O código está com um pequeno erro na função fusohorario. O valor retornado da função é fusohorario (a função em si), o que não é necessário e pode ser ajustado para void ou não retornar nada.

📄 Licença

Este projeto é um exemplo didático e está disponível para uso e modificação livremente.
