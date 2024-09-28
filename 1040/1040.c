#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4;

    scanf("%f %f %f %f", &n1 , &n2, &n3, &n4);

    double avg;

    avg = ( (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1) ) / 10;

    if( avg >= 7){

        printf("Media: %.1lf\nAluno aprovado.\n", avg);

    }else if( avg < 5 ){

        printf("Media: %.1lf\nAluno reprovado.\n", avg);

    }else{

        float exam_grade;

        double final_avg;

        scanf("%f", &exam_grade);

        final_avg = (avg + exam_grade) / 2;

        if ( final_avg >= 5 )
        {
            printf( "Media: %.1lf\n"
                    "Aluno em exame.\n"
                    "Nota do exame: %.1f\n"
                    "Aluno aprovado.\n"
                    "Media final: %.1lf\n", avg, exam_grade, final_avg);
        }else{

            printf( "Media: %.1lf\n"
                    "Aluno em exame.\n"
                    "Nota do exame: %.1f\n"
                    "Aluno reprovado.\n"
                    "Media final: %.1lf\n", avg, exam_grade, final_avg);


        }
                
        
    }

    
 
    return 0;
}