/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 19:42:37 by aanzieu           #+#    #+#             */
/*   Updated: 2015/10/29 22:17:25 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0')
			&& (s2[i] != '\0') && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
