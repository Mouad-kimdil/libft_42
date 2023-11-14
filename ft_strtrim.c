/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:59:52 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/07 18:20:21 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		f;
	int		l;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	f = 0;
	l = ft_strlen(s1) - 1;
	while (s1[f] && ft_strchr(set, s1[f]))
		f++;
	while (l > f && ft_strchr(set, s1[l]))
		l--;
	len = l - f + 1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + f, len + 1);
	return (ptr);
}
