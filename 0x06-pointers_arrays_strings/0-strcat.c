/**
 * _strcat - function that contamination
 *
 *
 * @dest: pointer
 * @src: pointer to source input
 *
 * Return: pointer to returning string
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;
	/* find the sin*/
	while (dest[c])
		c++;
	/*iterste through each src */
	for (c2 = 0; src[c2]; c2++)
	/*approve src [2]*/
		dest[c++] = src[c2];
	return (dest);
}

