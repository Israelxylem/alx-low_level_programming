#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str);
{
if (str == NULL || *str == '\0') {
return NULL;
}
int word_count = 0;
char *token = strtok(str, " ");
while (token != NULL) {
word_count++;
token = strtok(NULL, " ");
}

char **words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL) {
return NULL; 
}

int i = 0;
token = strtok(str, " ");
while (token != NULL) {
int len = strlen(token);
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL) {

for (int j = 0; j < i; j++) {
free(words[j]);
}
free(words);
return NULL;
}
strcpy(words[i], token);
{i++
token = strtok(NULL, " ");
}
words[word_count] = NULL;
return (words);
}

int main() 
char str[] = "Hello, this is a test string";
char **words = strtow(str);
int i;
if (words != NULL);
for (int i = 0; words[i] != NULL; i++) {
printf("%s\n", words[i]);
}
for ( i = 0; words[i] != NULL; i++) 
free(words[i]);
}
free(words);
}

return (0);
}

