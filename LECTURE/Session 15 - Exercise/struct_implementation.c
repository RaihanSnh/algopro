#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

typedef struct {
    char name[50];
    int math_score;
    int eng_score;
} student;

void input_scores(student class[], int *size) {
    int n, i;
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n); getchar();
    if (n > MAX_STUDENTS || n < 1) {
        printf("Invalid number of students!\n");
        return;
    }

    *size = n;

    for (i = 0; i < n; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%s", class[i].name);
        printf("Math Score: ");
        scanf("%d", &class[i].math_score);
        printf("English Score: ");
        scanf("%d", &class[i].eng_score);
    }
}

void display_data(student class[], int size) {
    int i, total_math = 0, total_eng = 0;

    printf("\nClass Data:\n");
    for (i = 0; i < size; i++) {
        printf("Name: %s, Math: %d, English: %d\n", class[i].name, class[i].math_score, class[i].eng_score);
        total_math += class[i].math_score;
        total_eng += class[i].eng_score;
    }

    if (size > 0) {
        printf("Average Math: %.2f\n", total_math / (float)size);
        printf("Average English: %.2f\n", total_eng / (float)size);
    } else {
        printf("No data available.\n");
    }
}

void edit_scores(student class[], int size) {
    char name[50];
    int i, found = 0;

    printf("Enter student name to edit: ");
    scanf("%s", name);

    for (i = 0; i < size; i++) {
        if (strcmp(class[i].name, name) == 0) {
            found = 1;
            printf("Editing %s's scores...\n", name);
            printf("New Math Score: ");
            scanf("%d", &class[i].math_score);
            printf("New English Score: ");
            scanf("%d", &class[i].eng_score);
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}

int main() {
    student class_a[MAX_STUDENTS], class_b[MAX_STUDENTS];
    int size_a = 0, size_b = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Edit Class A Scores\n");
        printf("2. Edit Class B Scores\n");
        printf("3. View Class Data\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice); getchar();

        switch (choice) {
            case 1:
                input_scores(class_a, &size_a);
                break;
            case 2:
                input_scores(class_b, &size_b);
                break;
            case 3:
                printf("\nClass A:\n");
                display_data(class_a, size_a);
                printf("\nClass B:\n");
                display_data(class_b, size_b);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
