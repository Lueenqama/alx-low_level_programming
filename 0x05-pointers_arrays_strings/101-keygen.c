#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

void generate_password(char *password)
{
	int i;
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_length = sizeof(charset) - 1;

	for (i = 0; i < PASSWORD_LENGTH; i++) {
		int index = rand() % charset_length;
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';
}

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	srand(time(NULL));

	generate_password(password);

	printf("Generated password: %s\n", password);

	return 0;
}

