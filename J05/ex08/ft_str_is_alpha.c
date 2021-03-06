/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 20:41:30 by aanzieu           #+#    #+#             */
/*   Updated: 2015/10/28 20:00:10 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 65) || (str[i] > 90))
				&& ((str[i] < 97) || (str[i] > 122)))
			return (0);
		i++;
	}
	return (1);
}
