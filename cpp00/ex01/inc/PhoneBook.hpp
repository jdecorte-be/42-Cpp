/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte42 <jdecorte42@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:35:32 by jdecorte42        #+#    #+#             */
/*   Updated: 2022/03/28 22:11:46 by jdecorte42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
    private:
        int         _index;
        Contact     _contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
};

#endif