/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:52:08 by yokten            #+#    #+#             */
/*   Updated: 2024/01/16 17:26:14 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int	ac,	char	**av)
{
	int i = 0;
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		while (++i < ac)
		{
			while (av[i][j])
				std::cout << (char)toupper(av[i][j++]);
			j = 0;
		}
		std::cout << std::endl;
	}
}
