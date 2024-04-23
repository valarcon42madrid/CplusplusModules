/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:29 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/11 12:04:32 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t   serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data        *ptr;
    Data        *new_ptr;
    uintptr_t   raw;

    ptr = new Data;
    ptr->data = "The DATA!";

    raw = serialize(ptr);
    new_ptr = deserialize(raw);

    std::cout << std::endl;
    std::cout << "Data of ptr: " << ptr->data << std::endl;
    std::cout << "Data of new_ptr (serialized and deserialized): " << new_ptr->data << std::endl;
    std::cout << std::endl;
    std::cout << "CHECKING THAT THE RETURN VALUE IS EQUAL TO THE FIRST POINTER: " << std::endl;
    std::cout << std::endl;
    std::cout << "address of ptr: " << ptr << std::endl;
    std::cout << "return value of deserialize (address of new_ptr): " << new_ptr << std::endl;
    std::cout << std::endl;

    delete ptr;
}
