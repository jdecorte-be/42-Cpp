/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte42 <jdecorte42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:35:32 by jdecorte42        #+#    #+#             */
/*   Updated: 2022/04/07 12:04:46 by jdecorte42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include<string>

class PhoneBook
{
    private:
        int         index;
        Contact     contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
        void search_contact(int index);
        void show_all();
};

std::string limit10char(std::string str);

#endif