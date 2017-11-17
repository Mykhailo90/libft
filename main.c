#include <stdio.h>  // Для printf
#include <string.h> // Для strstr
#include <stdlib.h>
#include "libft.h"

size_t       count_words(char const *s, char c)
{
    size_t  i;

    i = 0;
    while (*s)
    {
        if (*s == c)
            s++;
        while (*s != c)
        {
            if (*(s + 1) == c || *(s + 1) == '\0')
                i++;
			if (*(s + 1) == '\0')
				return (i);
            s++;
        }
		if (*(s + 1) == '\0')
            return (i);
    }
    return (i);
}

size_t		count_symbols(char const *s, char c)
{
	size_t	i;

	i = 0;
 
	while (*s == c)
            s++;
    while (*s != c && *s != '\0')
	{
            i++;
			s++;
	}
    return (i);
}

char    **ft_strsplit(char const *s, char c)
{
    char            **arr_ptr;
    size_t          len;
    int             i;
	size_t			j;

	j = count_words(s, c);
    i = 0;
    arr_ptr = NULL;
    if (!s)
        return (NULL);
    arrPtr = (char **)ft_memalloc(j + 1);
    if (!arrPtr)
		return (NULL);
	while (j--)
    {
		len = count_symbols(s, c);
		arrPtr[i] = ft_memalloc(len + 1);
		while (*s == c)
			s++;
		ft_strncpy(arr_ptr[i], s, len);
		s = s + len;
		printf("%s\n", arr_ptr[i]);
		i++;
	}
    return (arr_ptr);
}

int	 main (void)
{ 
	char **text;
	char str [] = "      split       this for   me  !       ";
	text = ft_strsplit(str, ' ');

//	printf("%s \n" , text[0]);
//	printf("%s", text[0]);
		
	return 0;
}