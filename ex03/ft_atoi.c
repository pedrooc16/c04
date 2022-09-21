/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:26:43 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/21 17:54:05 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

int	ft_atoi(const char *str);

int	main()
	{ 
		char c[] = "-21241412";
			printf("%i\n", atoi(c));
			printf("%i\n", ft_atoi(c));
	}

int	ft_atoi(const char *str)
{
	int		sign;
	int		n;

	sign = 1;
	n = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign =  -1;
			str++;
	}
	while (*str > 47 && *str < 58)
	{
		n = n * 10;
		n += (sign ((str) - 48));
		str++;
	}
	return (n);
}
