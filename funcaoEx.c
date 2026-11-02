/* Comecando com uma funcao simples
   Apenas para relembrar como criar uma funcao
   E poder ter um retorno (resposta)*/

int calcularTotal(int preco, int quantidade) {
    return preco * quantidade; // recebendo dois valores, para calcular o valor total
}

double calcularMedia(int nota1, int nota2) {
    return (nota1 + nota2) / 2.0; // Calculando a média de dois valores
}

bool ehPar(int a) { // Verificar se o número é par
    if (a % 2 == 0) { // Dividindo o número por 2, se o resto for zero o número é par
        return true;
    }
    return false; // se o resto da divisão não for zero o número é impar
}

int maiorNumero(int a, int b) { // Identificar qual dos dois numero é maior
    if ((a - b) > 0) {
        return a;
    } else {
        return b;
    }
}

int maiorDeTres(int a, int b, int c) { // Identificar qual dos 3 números é o maior
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int somarAteN(int n) {
    int a = 0;

    for (int i = 1; i <= n; i++) {
        a = i + a;
    }

    return a;
}

int contarPares ( int n ) {
    int a = 0;
 
    for (int i = 1; i <= n; i++){  
           if ( i % 2 == 0){  
                a = a + 1;  
           }  
     }

     return a;  
}

int somarPares(int n) {
    int a = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a = a + i;
        }
    }

    return a;
}


int contarDivisiveisPorTres(int n) {
    int a = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            a++;
        }
    }

    return a;
}

int menorNumero(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

