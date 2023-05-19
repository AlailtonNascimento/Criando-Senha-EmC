#include <stdio.h>
#include <string.h>
main()
{
// variável usada para armazenar a senha, a qual pode ser qualquer arranjo de
// caracteres.
char *senha = "abacate"; // poderia ser também: char senha[7] = "asdfgh";
// variável usada para armazenar a senha entrada pelo usuário.
char s[7];
printf ("Informe a senha: ");
gets(s); // poderia ser também: scanf("%s", s);
if (!(strcmp(s, senha))) // poderia ser também: if (strcmp(s, senha) == 0)
printf("Senha Valida.\n");
else
printf("Senha Invalida.\n");

}
