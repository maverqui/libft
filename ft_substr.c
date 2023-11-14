#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)

{
    size_t i;
    char *new_s;

    i = 0;
    if (start < 0 || start > ft_strlen(s))
        return NULL;
    new_s = (char *) malloc((len + 1) * sizeof(char));
    while (s[start] && i < len)
    {
        new_s[i] = s[start];
        start++;
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}

int main()
{
    printf("%s\n", ft_substr("nugah kagollllle", 20, 10));
    // printf("%s\n", substr("nugah kagollllle", 2, 4));
}