#include<stdio.h>
#include<string.h>
int main(){
    int grades[20][3], sum_grades=0, std_avg=0, failed=0, Passed=0, highest_avg=0, total=0, clss_avg=0;
    char name[50], letter, hname[50];
    printf("--------------------------------");
    printf("\nHalf Way Tree Primary Grading system\n");
    printf("--------------------------------\n");
    for(int i=0; i<2; i++){
        printf("\nEnter the name of student %d:", i+1);
        scanf("%s", name);
        printf("Enter %s's grades in order of Homework/Class/Test scores\n\n", name);
        for(int j=0;  j<3; j++){
            printf("Score: ");
            scanf("%d", &grades[i][j]);
            sum_grades+=grades[i][j];
            std_avg=sum_grades/3;
        }
        if(std_avg>=85){
                letter='A';
                Passed++;
            }
            else if(std_avg>=70){
                letter='B';
                Passed++;
            }
            else if(std_avg>=55){
                letter='C';
                Passed++;
            }
            else{
                letter='F';
                failed++;
            }
        if(std_avg>highest_avg){
            highest_avg=std_avg;
            strcpy(hname, name);
        }
        total+=std_avg;
        clss_avg=total/2;
        sum_grades=0;
        printf("\n%s's average is %d\n", name, std_avg); 
        printf("%s got a %c\n", name, letter);
    }
    printf("\n--------------------------------\n");
    printf("%d students passed, %d students failed", Passed, failed);
    printf("\nThe student with the highest average is %s with an average of %d", hname, highest_avg);
    printf("\nThe class average is %d", clss_avg);
    printf("\n--------------------------------\n");
    return 0;
}