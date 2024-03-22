/*
criptografia fraca baseada na operação booleana XOR - definição (.c)

recebe um string char* e aplica um bitwise-XOR entre ela e um caracter fixo (chave), grava o resultado em out
a escolha da letra 'k' foi arbitrária, sendo possível substituí-la por outro caracter
importante: como a operação booleana xor bit a bit inverte a si mesma (mantendo uma entrada fixa),
a mesma função é usada para criptografar e descriptografar 
*/

void crypt(char *in, char *out, int tamanho){
    int i;
    char chave = 'k';
    for(i = 0; i < tamanho; i++){
        out[i] = in[i] ^ chave;
    }
}
