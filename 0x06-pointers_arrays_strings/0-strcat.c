/**
 * _strcat - function to concatnate strings
 *
 * @dest: destination for concatnation
 *
 * @src: source of string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
  int dest_len;
  int a;

  dest_len = _strlen(dest);

  for (a = 0 ; src[a] != '\0' ; a++)
    dest[dest_len + a] = src[a];

  dest[dest_len + a] = '\0';

  return (dest);

}
