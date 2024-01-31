#include <stdio.h>
int main(){
    double A, B, C, media;
    printf("Digite a primeira nota:\n");
    scanf("%lf", &A);
    printf("Digite a segunda nota:\n");
    scanf("%lf", &B);
    printf("Digite a terceira nota:\n");
    scanf("%lf", &C);
    A = A * 2.0;
    B = B * 3.0;
    C = C * 5.0;
    media = (A + B + C) / 10;
    printf("A media do aluno é: %.1lf", media);
return 0;
}
