/**
 * _isalpha - print alphabets if lowercase using asci code
 * print lowercase alphapet a-z
 *
 * @c: character
 *
 * Return: 1 if lowercase 0 if uppercase
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);

	return (0);

}	
