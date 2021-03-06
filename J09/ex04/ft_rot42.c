/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:06:03 by aanzieu           #+#    #+#             */
/*   Updated: 2015/10/22 22:02:50 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'A') && (str[i] <= 'Q'))
				|| ((str[i] >= "a") && (str[i] <= "q")))
			i = i + 16;
		else if (((str[i] >= 'P') && (str[i] <= 'Z'))
				|| ((str[i] >= "p") && (str[i] <= "z")))
			i = i + 16;
	}
	return (str);
}
