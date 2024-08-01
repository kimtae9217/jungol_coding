#include <stdio.h>

int main(){
    int student_score[3] = {0}; // 학생별 총점
    int subject_score[3] = {0}; // 과목별 합계
    int student[3][3] = {0}; // 학생 점수 

    for(int i = 0; i < 3; i++){    
        printf("%d번째 학생의 점수 ", i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d", &student[i][j]);
            subject_score[j] += student[i][j];
            student_score[i] += student[i][j];
        }
    }
    
    printf("     국어 영어 수학 총점\n");
    for(int i = 0; i < 3; i++){
        printf(" %d번", i+1);
        for(int j = 0; j < 3; j++){
            printf("%4d", student[i][j]);
        }
        printf("%4d\n", student_score[i]);
    }

    printf("합계");
    for(int j = 0; j < 3; j++){
        printf("%4d", subject_score[j]);
    }

    int total_sum = subject_score[0] + subject_score[1] + subject_score[2]; 
    printf("%4d\n", total_sum);


    return 0;
}