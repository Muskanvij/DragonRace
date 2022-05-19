/*
 * File Name:    dragon.h
 *
 * Author:        Your Name
 * Creation Date: Tuesday, August 13 2019, 17:24
 * Last Modified: Monday, August 19 2019, 14:22
 *
 * File Description:
 *
 * This is the .h file for Dragons
 * Dragons have
 *    name - never changes
 *    colour - never cahnges
 *    wingspan - definitely can change
 *    length - definitely can change
 *    age - definitely changes
 *    missions - starts at 0 and definitely changes
 *
 */
#ifndef DRAGON_H
#define DRAGON_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

class Dragon
{
public:
    Dragon( ) = default;
    // This constructor can be used from the file, when we know all
    // details, or if know all the details from the keyboard
    /*
     * Uncomment these 2 contructor prototypes if you want to use
     * one or both of these overloaded functions.
     *
     * You need to implement them in the dragon.cpp file
     *
    Dragon( const std::string & name, const std::string & colour, double wing,
            double length, int age, int missions );
     *
 *
     *
     * // The 4 absolute things we need to know about a Dragon
     * Dragon( const std::string & name, const std::string & colour,
     *
     */


    /*
     * Uncomment these mutator protoypes and implement them in the
     * dragon.cpp file
     *
    void setWingspan( double wingspan );
    void setLength( double length );
    void addMission( );
    void incAge( );
      */

    // inline accessor functions
    const std::string & getName( ) const { return name; }
    const std::string & getColour( ) const { return colour; }
    double getWingspan( ) const { return wingspan; }
    double getLength( ) const { return length; }
    int getAge( ) const { return age; }
    int getMissions( ) const { return missions; }

    /*
     * Uncomment these friend function prototypes and\
     * implement them in the dragon.cpp file
     *

    friend std::ostream& operator << ( std::ostream& os,
                                       const Dragon& d );
    friend std::ofstream& operator << ( std::ofstream& fout,
                                        const Dragon& d );
    friend std::istream& operator >> (std::istream& is,
                                     Dragon& d);
    friend std::ifstream& operator >> (std::ifstream& fin,
                                     Dragon& d);
     */
private:
    std::string name {};
    std::string colour {};
    double wingspan {0};
    double length {0};
    int age {0};
    int missions {0};
};

#endif

                                                               