/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitadic <mitadic@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:02:07 by mitadic           #+#    #+#             */
/*   Updated: 2024/10/14 14:20:40 by mitadic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int nb)
{
	int	i;
	int	j;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		j = 2;
		while (j <= i)
		{
			if (j * i == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	int	i = -1;
//
//	while (++i < 100)
//		printf("<%d> %s\n", i, ft_isprime(i) ? "is prime" : "-");
//}
