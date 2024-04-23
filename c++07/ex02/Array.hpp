/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:01:13 by valarcon          #+#    #+#             */
/*   Updated: 2023/02/13 12:01:16 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template < typename T >
class Array {

private:
    T*              _arr;
    unsigned int    _size;

public:
    Array( void ) : _arr( new T() ), _size( 0 ) {};
    Array( unsigned int n ) : _arr( new T[n] ), _size( n ) {};
    Array( const Array& rhs ) : _arr( new T[rhs.size()] ), _size( rhs.size() ) {
        for ( unsigned int i( 0 ); i < _size; i++ )
            _arr[i] = rhs._arr[i];
    };

    Array& operator=( const Array& rhs ) {
        if ( this != &rhs ) {
            delete [] _arr;
            _arr = new T[rhs.size()];
            _size = rhs._size;
            for ( unsigned int i( 0 ); i < _size; i++ )
                _arr[i] = rhs._arr[i];
        }
        return *this;
    }

    T& operator[]( unsigned int i ) const {
        if ( i >= _size )
            throw OutOfBoundsException();
        return _arr[i];
    }

    unsigned int  size( void ) const { return _size; }

    ~Array( void ) { delete [] _arr; }

    class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is invalid";}
    };
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}

#endif
