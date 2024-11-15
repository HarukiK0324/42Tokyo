/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:38:28 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/14 14:06:29 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	ans;
	int				sign;
	char			*temp;

	ans = 0;
	sign = 1;
	temp = (char *)nptr;
	while (*temp == 20 || (*temp >= 9 && *temp <= 13))
		temp++;
	if (*temp == '-')
	{
		sign = -1;
		temp++;
	}
	if (*temp == '+')
		temp++;
	while (*temp >= 48 && *temp <= 57)
	{
		ans = ans * 10 + (*temp - 48);
		temp++;
	}
	return ((int)(sign * ans));
}
