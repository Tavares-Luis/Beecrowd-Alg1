// ...existing code...

void selecao_vetor_I() {
    float A[100];
    int i;
    for(i = 0; i < 100; i++) {
        scanf("%f", &A[i]);
    }
    for(i = 0; i < 100; i++) {
        if(A[i] <= 10.0) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
}
// ...existing code...

