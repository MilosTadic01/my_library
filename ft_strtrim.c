/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitadic <mitadic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:34:19 by mitadic           #+#    #+#             */
/*   Updated: 2024/10/10 12:08:25 by mitadic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*newstring;

	front = 0;
	rear = ft_strlen(s1);
	newstring = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[front] != '\0' && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] != '\0' && ft_strchr(set, s1[rear - 1])
			&& rear > front)
		{
			rear--;
		}
		if (front > rear)
		{
			return (ft_strdup(""));
		}
		newstring = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (newstring)
			ft_strlcpy(newstring, &s1[front], rear - front + 1);
	}
	return (newstring);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "assasbasaIHasaGJKbLHGKLasasassbasasas";
	char	*s2 = "sga";
	char	*set = "asdf";

	printf("s1 trimmed is %s\n", ft_strtrim(s1, set));
	printf("s2 trimmed is %s\n", ft_strtrim(s2, set));
}
*/
