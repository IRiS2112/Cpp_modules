/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:49:50 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:02:23 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

# include <iostream>
# include <fstream>

class	Sed {
		private:
	std::string		_in_name;
	std::string		_s1;
	std::string		_s2;

		public:
	Sed();
	Sed(const std::string av1, const std::string av2, const std::string av3);
	~Sed();

	int	replaceInFile(void);
};

#endif