#include <stdio.h>

int main()
{
    int password;
    int password_attempt;
    
    printf("Create a password: ");
    scanf("%d", &password);
    
    for (int i = 0; i < 4; i++){
        printf("Enter your password: ");
        scanf("%d", &password_attempt);
        
        if (password_attempt != password){
            printf("Wrong! Try Again.\n");
        } else {
            printf("Accepted, loading profile\n");
            break;
        }
    }
    
    return 0;
}
