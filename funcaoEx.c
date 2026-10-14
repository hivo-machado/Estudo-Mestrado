int calcularTotal(int preco, int quantidade) {
    return preco * quantidade;
}

double calcularMedia(int nota1, int nota2) {
    return (nota1 + nota2) / 2.0;
}

bool ehPar(int a) {
    if (a % 2 == 0) {
        return true;
    }
    return false;
}

int maiorNumero(int a, int b) {
    if ((a - b) > 0) {
        return a;
    } else {
        return b;
    }
}

int maiorDeTres(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}
