/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:20:12 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:25:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <string>
# include <iostream>

class 	Harl {
		private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

		public:
	void	complain(std::string level);
};

#endif