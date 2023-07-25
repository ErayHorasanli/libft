/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhorasa <erhorasa@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:44:50 by erhorasa          #+#    #+#             */
/*   Updated: 2023/07/18 12:33:42 by erhorasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	d;
	int	result;

	i = 0;
	d = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		d = d * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10);
		result = result + (str[i] - '0');
		i++;
	}
	return (result * d);
}
