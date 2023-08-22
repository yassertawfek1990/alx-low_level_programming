#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Enter program
 *
 * Description: C program prints using printf command
 *
 * Return: always return 0
*/

int random_int(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to generate a random valid password
void generate_password(char *password) {
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random_index = random_int(0, NUM_VALID_CHARS - 1);
        password[i] = valid_chars[random_index];
    }

    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    generate_password(password);

    printf("Generated Password: %s\n", password);

    return 0;
}


