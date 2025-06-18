// ...existing code...

void selecao_vetor_I() {
    float A[100];
    int i;
    // Lê 100 valores para o vetor A
    printf("Digite 100 valores (um por linha):\n");
    for(i = 0; i < 100; i++) {
        scanf("%f", &A[i]);
    }
    // Verifica e imprime os valores menores ou iguais a 10
    printf("\nValores menores ou iguais a 10:\n");
    for(i = 0; i < 100; i++) {
        if(A[i] <= 10.0) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
}
// ...existing code...
