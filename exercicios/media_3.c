#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, nota_exame, media_final;
    
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;
    
    printf("Media: %.1f\n", media);
    
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        media_final = (media + nota_exame) / 2.0;
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }
    
    return 0;
}
