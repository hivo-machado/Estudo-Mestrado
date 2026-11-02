int somarPositivos(int n) {
    int a = 0;

    for (int i = -n; i <= n; i++) {
        if (i > 0) {
            a = a + i;
        }
    }

    return a;
}

int fatorial(int n) {
    int a = 1;

    for (int i = 1; i <= n; i++) {
        a = a * i;
    }

    return a;
}


int inverterNumero(int n) {
    int invertido = 0;

    while (n > 0) {
        invertido = 10 * invertido;
        invertido = (n % 10) + invertido;
        n = n / 10;
    }

    return invertido;
}

int somarAlgarismos(int n) {
    int soma = 0;

    while (n > 0) {
        soma = (n % 10) + soma;
        n = n / 10;
    }

    return soma;
}

bool ehPalindromo(int n) {
    int inverte = 0;
    int semelhante = n;

    while (n > 0) {
        inverte = 10 * inverte;
        inverte = n % 10 + inverte;
        n = n / 10;
    }

    if (semelhante == inverte) {
        return true;
    }

    return false;
}

int contarPares(int n) {
    int contador = 0;
    int i = 1;

    while (i <= n) {
        if (i % 2 == 0) {
            contador++;
        }
        i++;
    }

    return contador;
}

int somarPares(int n) {
    int soma = 0;
    int i = 1;

    while (i <= n) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
        i++;
    }

    return soma;
}

int contarAlgarismos(int n) {
    int contador = 0;

    while (n > 0) {
        contador++;
        n = n / 10;
    }

    return contador;
}