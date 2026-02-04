#include<stdio.h>
struct student{
    int roll;
    char name[20];
    struct marks{
        int marks[200];
    } d;
};
int main(){
    struct student s;
    int n,i,max,min;
    printf("ENTER N VALUE: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER MARKS OF SUBJECT %d: ", i+1);
        scanf("%d",&s.d.marks[i]);
    }
    printf("\n--- MARKS LIST ---\n");
    for(i=0;i<n;i++){
        printf("Subject %d Marks = %d\n", i+1, s.d.marks[i]);
    }
    // ? initialize first
    max = s.d.marks[0];
    min = s.d.marks[0];
    for(i=1;i<n;i++){
        if(s.d.marks[i] > max)
            max = s.d.marks[i];
        if(s.d.marks[i] < min)
            min = s.d.marks[i];
    }
    printf("\nMAX MARKS IS: %d", max);
    printf("\nMIN MARKS IS: %d", min);
    return 0;
}

