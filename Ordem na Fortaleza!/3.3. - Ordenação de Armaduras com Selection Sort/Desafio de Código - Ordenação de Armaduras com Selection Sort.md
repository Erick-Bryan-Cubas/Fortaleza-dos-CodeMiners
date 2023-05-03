# DESCRIÇÃO
Os guerreiros da Fortaleza dos CodeMiners precisam manter suas armaduras em ordem, para facilitar a escolha do equipamento certo antes das batalhas. As armaduras são numeradas de acordo com seu nível de proteção, e os guerreiros desejam organizá-las em ordem decrescente. Sua missão é criar um algoritmo em C que implemente o Selection Sort¹ para ordenar as armaduras. Com esse algoritmo, os guerreiros poderão encontrar a armadura mais adequada rapidamente, o que pode ser crucial em uma situação de combate.

¹Este algoritmo é um pouco mais avançado que os anteriores. Ele divide a lista em duas partes: a parte ordenada e a parte não ordenada. A cada iteração, o algoritmo seleciona o menor (ou maior) elemento da parte não ordenada e o move para o final da parte ordenada. Isso ajuda a entender melhor a divisão do trabalho em algoritmos de ordenação. 

# ENTRADA
1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de armaduras.
2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando o nível de proteção de cada armadura.

# SAÍDA
Imprima a lista de armaduras em ORDEM DECRESCENTE, com cada número separado por um espaço.

# EXEMPLOS
A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
|------|-------|
| 5
5 3 4 1 2  | 1 2 3 4 5 |
| 7
10 20 30 40 50 60 7 | 7 10 20 30 40 50 60 |
| 9
1000 1 10 100 0 4 4000 400 40 | 0 1 4 10 40 100 400 1000 4000 |
| 6
22 3 4 9 77 20 | 3 4 9 20 22 77 |