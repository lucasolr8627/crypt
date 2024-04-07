# crypt
implementação em c de algoritmo para criptografia fraca baseada na operação booleana XOR<br><br>
recebe um string char* e aplica um bitwise-XOR entre ela e um caracter fixo (chave), grava o resultado em out<br>
a escolha da letra 'k' foi arbitrária, sendo possível substituí-la por outro caracter<br>
importante: como a operação booleana xor bit a bit inverte a si mesma (mantendo uma entrada fixa),<br>
a mesma função é usada para criptografar e descriptografar<br><br>
para compilar com g++, digitar a linha de comando abaixo. ps: filename.c eh o nome do arquivo c que vai fazer chamadas da função.<br>
g++ crypt.c filename.c -o targetname
