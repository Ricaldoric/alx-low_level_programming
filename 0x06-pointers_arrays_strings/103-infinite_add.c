#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to buffer, or 0 if buffer too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	i = j = k = l = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i--;
	j--;

	while (i >= 0 || j >= 0)
	{
		m = n = 0;
		if (i >= 0)
			m = n1[i--] - '0';
		if (j >= 0)
			n = n2[j--] - '0';
		if (k > size_r)
			return (0);
		r[k++] = (m + n + l) % 10 + '0';
		l = (m + n + l) / 10;
	}
	if (l && k < size_r)
		r[k++] = l + '0';
	if (k >= size_r)
		return (0);
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
		l = r[i], r[i] = r[j], r[j] = l;
	return (r);
}
