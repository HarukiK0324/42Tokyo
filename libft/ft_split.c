/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:46:39 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/15 14:08:43 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

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
    return count;
}

char **ft_split(char const *s, char c)
{
	char **arr;

	arr = malloc(count_words(s,c) * sizeof(char *));
	if(arr == (void *)0)
		return (void *)0;
	return (void *)0;
}
