# crypt
implementação em c de algoritmo para criptografia fraca baseada na operação booleana XOR<br><br>
recebe um string char* e aplica um bitwise-XOR entre ela e um caracter fixo (chave), grava o resultado em out<br>
a escolha da letra 'k' foi arbitrária, sendo possível substituí-la por outro caracter<br>
importante: como a operação booleana xor bit a bit inverte a si mesma (mantendo uma entrada fixa),<br>
a mesma função é usada para criptografar e descriptografar. para ver um exemplo, acesse os arquivos .png deste repositório.<br><br>
para compilar usando g++, digitar a linha de comando abaixo.<br>
g++ filename.c crypt.c -o targetname
