/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:01:31 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 00:00:05 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief checks if given value is alphabetic
/// @param c value of input character
/// @return 1 if true, 0 if not
int	ft_isalpha(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'A';
	printf("Is c alphabetical?: %d\n", ft_isalpha(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalpha(c));
	c = 'z';
	printf("Is c alphabetical?: %d\n", ft_isalpha(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalpha(c));
	c = '+';
	printf("Is c alphabetical?: %d\n", ft_isalpha(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalpha(c));
	return (0);
}*/
