#include "../../libft/includes/libft.h"

int				ft_write_error(char *str)
{
	write(2, str, ft_strlen(str));
	return (1);
}

int				ft_get_table_size(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
