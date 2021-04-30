#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if(!src && !dst)
		return(0);
	if(dst > src)
	{
		while(len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len --;
		}
	}
	else
	{
		while(i < len) // пока счетчик меньше длинны
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;		
		}
	}
	return(dst);
}