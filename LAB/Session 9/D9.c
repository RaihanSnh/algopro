#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[21];
    int score;
} User;

int compare(const void *a, const void *b) {
    User *user_a = (User *)a;
    User *user_b = (User *)b;
    return user_b->score - user_a->score;
}

int main() {
    int n, user_count = 0;
    scanf("%d", &n);

    User *users = malloc(n * sizeof(User));

    for (int i = 0; i < n; i++) {
        char name[21];
        int score;
        scanf("%s %d", name, &score);

        int found = 0;
        for (int j = 0; j < user_count; j++) {
            if (strcmp(users[j].name, name) == 0) {
                users[j].score = score;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(users[user_count].name, name);
            users[user_count].score = score;
            user_count++;
        }
    }

    qsort(users, user_count, sizeof(User), compare);

    for (int i = 0; i < user_count; i++) {
        printf("%s [%d]\n", users[i].name, users[i].score);
    }
    free(users);

    return 0;
}
