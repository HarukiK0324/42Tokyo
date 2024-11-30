/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:46:39 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 16:29:30 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

static char	*substring(char const *s, int index, char c)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (s[index + len] != c)
		len++;
	str = malloc(len + 1);
	if (str == (void *)0)
		return ((void *)0);
	while (i < index)
	{
		str[i] == s[index + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	free_all(char **arr, int i)
{
	int	index;

	index = 0;
	while (index < i)
	{
		free(arr[index]);
		index++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		index;

	i = 0;
	index = 0;
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == (void *)0)
		return ((void *)0);
	while (i < count_words(s, c))
	{
		while (s[index] == c)
			index++;
		arr[i] = substring(s, index, c);
		if (arr[i] == (void *)0)
		{
			free_all(arr, i);
			return ((void *)0);
		}
		index += ft_strlen(arr[i]);
		i++;
	}
	arr[i] = (void *) '\0';
	return (arr);
}
