#include <stdio.h>
#include <string.h>
main()
{
// vari�vel usada para armazenar a senha, a qual pode ser qualquer arranjo de
// caracteres.
char *senha = "abacate"; // poderia ser tamb�m: char senha[7] = "asdfgh";
// vari�vel usada para armazenar a senha entrada pelo usu�rio.
char s[7];
printf ("Informe a senha: ");
gets(s); // poderia ser tamb�m: scanf("%s", s);
if (!(strcmp(s, senha))) // poderia ser tamb�m: if (strcmp(s, senha) == 0)
printf("Senha Valida.\n");
else
printf("Senha Invalida.\n");

}
