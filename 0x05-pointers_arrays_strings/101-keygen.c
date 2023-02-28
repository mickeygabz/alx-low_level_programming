#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
       	char password[PASSWORD_LENGTH + 1];
       	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+[]{}|;:,.<>?";
	
       	srand(time(NULL));

       	for (i = 0; i < PASSWORD_LENGTH; i++) {
       	 password[i] = charset[rand() % (sizeof(charset) - 1)];
       	}
       	password[PASSWORD_LENGTH] = '\0';

       	printf("Random password for 101-crackme: %s\n", password);

       	return (0);
}

