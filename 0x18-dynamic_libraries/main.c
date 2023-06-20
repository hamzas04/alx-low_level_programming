#include <stdio.h>

int _putchar(char c) {
	// Code de la fonction _putchar
	return putchar(c);
}

int _islower(int c) {
	// Code de la fonction _islower
	// Retourne 1 si c est une minuscule, 0 sinon
	return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
	// Code de la fonction _isalpha
	// Retourne 1 si c est une lettre, 0 sinon
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
	// Code de la fonction _abs
	// Retourne la valeur absolue de n
	return (n >= 0 ? n : -n);
}

int _isupper(int c) {
	// Code de la fonction _isupper
	// Retourne 1 si c est une majuscule, 0 sinon
	return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
	// Code de la fonction _isdigit
	// Retourne 1 si c est un chiffre, 0 sinon
	return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
	// Code de la fonction _strlen
	// Calcule la longueur de la chaîne de caractères s
	int length = 0;
	while (*s != '\0') {
		length++;
		s++;
	}
	return length;
}

void _puts(char *s) {
	// Code de la fonction _puts
	// Affiche la chaîne de caractères s
	printf("%s\n", s);
}

char *_strcpy(char *dest, char *src) {
	// Code de la fonction _strcpy
	// Copie la chaîne de caractères src dans dest
	char *original_dest = dest;
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return original_dest;
}

int _atoi(char *s) {
	// Code de la fonction _atoi
	// Convertit la chaîne de caractères s en un entier
	int sign = 1;
	int result = 0;

	if (*s == '-') {
		sign = -1;
		s++;
	}

	while (*s != '\0') {
		result = result * 10 + (*s - '0');
		s++;
	}

	return sign * result;
}

char *_strcat(char *dest, char *src) {
	// Code de la fonction _strcat
	// Concatène la chaîne de caractères src à la fin de dest
	char *original_dest = dest;

	while (*dest != '\0') {
		dest++;
	}

	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return original_dest;
}

char *_strncat(char *dest, char *src, int n) {
	// Code de la fonction _strncat
	// Concatène les n premiers caractères de src à la fin de dest
	char *original_dest = dest;

	while (*dest != '\0') {
		dest++;
	}

	while (*src != '\0' && n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return original_dest;
}

char *_strncpy(char *dest, char *src, int n) {
	// Code de la fonction _strncpy
	// Copie les n premiers caractères de src dans dest
	char *original_dest = dest;

	while (*src != '\0' && n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	// Si src a moins de n caractères, on remplit dest avec des caractères nuls
	while (n > 0) {
		*dest = '\0';
		dest++;
		n--;
	}

	return original_dest;
}

int _strcmp(char *s1, char *s2) {
	// Code de la fonction _strcmp
	// Compare les chaînes de caractères s1 et s2
	while (*s1 != '\0' && *s2 != '\0') {
		if (*s1 < *s2)
			return -1;
		else if (*s1 > *s2)
			return 1;
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -1;
	else
		return 1;
}

char *_memset(char *s, char b, unsigned int n) {
	// Code de la fonction _memset
	// Remplit les n premiers octets de s avec la valeur b
	char *original_s = s;

	while (n > 0) {
		*s = b;
		s++;
		n--;
	}

	return original_s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
	// Code de la fonction _memcpy
	// Copie les n premiers octets de src dans dest
	char *original_dest = dest;

	while (n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return original_dest;
}

char *_strchr(char *s, char c) {
	// Code de la fonction _strchr
	// Cherche la première occurrence du caractère c dans la chaîne s
	while (*s != '\0') {
		if (*s == c)
			return s;
		s++;
	}

	if (c == '\0')
		return s;
	else
		return NULL;
}

unsigned int _strspn(char *s, char *accept) {
	// Code de la fonction _strspn
	// Calcule la longueur de la sous-chaîne initiale de s contenant uniquement des caractères présents dans accept
	unsigned int count = 0;
	char *ptr;

	while (*s != '\0') {
		ptr = accept;
		while (*ptr != '\0') {
			if (*s == *ptr)
				break;
			ptr++;
		}
		if (*ptr == '\0')
			break;
		count++;
		s++;
	}

	return count;
}

char *_strpbrk(char *s, char *accept) {
	// Code de la fonction _strpbrk
	// Cherche la première occurrence dans s d'un des caractères présents dans accept
	while (*s != '\0') {
		char *ptr = accept;
		while (*ptr != '\0') {
			if (*s == *ptr)
				return s;
			ptr++;
		}
		s++;
	}

	return NULL;
}

char *_strstr(char *haystack, char *needle) {
	// Code de la fonction _strstr
	// Cherche la première occurrence de la chaîne needle dans la chaîne haystack
	while (*haystack != '\0') {
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_haystack == *ptr_needle && *ptr_haystack != '\0' && *ptr_needle != '\0') {
			ptr_haystack++;
			ptr_needle++;
		}

		if (*ptr_needle == '\0')
			return haystack;

		haystack++;
	}

	return NULL;
}
