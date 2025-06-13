
#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];
    char password[50];
    char password_attempt[50];
    
    printf("Create a username:  ");
    scanf("%49s", username);
    printf("Create a password: ");
    scanf("%49s", password);
    
    for (int i = 0; i < 4; i++) {
        printf("Enter your password: ");
        scanf("%49s", password_attempt);
        
        if (strcmp(password_attempt, password) != 0) {
            printf("Wrong! Try Again.\n");
        } else {
            printf("Accepted, loading profile\n");
            printf("Hello, %s\n", username);
            break;
        }
    }
    
    return 0;
}