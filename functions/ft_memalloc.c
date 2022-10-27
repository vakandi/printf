#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone_memoire;

	zone_memoire = malloc(size);
	if (zone_memoire)
	{
		ft_bzero(zone_memoire, size);
		return (zone_memoire);
	}
	else
		return (NULL);
}
