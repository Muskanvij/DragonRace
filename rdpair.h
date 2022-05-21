/*
 * File Name:    rdpair.h
 *
 * Author:        Your Name
 * Creation Date: Wednesday, August 14 2019, 13:09
 * Last Modified: Wednesday, August 21 2019, 12:03
 *
 * File Description:
 * This is the class that combines a Rider and a Dragon
 *
 * For the start, we'll assume that a Rider and a Dragon are
 * bonded at impression.
 *
 * Since we can't have a Rider without a Dragon and we can't have a
 * Dragon without a Rider (at the start) all interactions with
 * the Rider / Dragon pair should go through this class.
 *
 * Perhaps in an extension version (possible bonus marks) we can
 * have it so that Dragons can have different Riders. This would the
 * situation if the Rider was injured but the Dragon was fit.
 *
 * How to decide if you have found the right pair if you are
 * searching? We have a choice of either Rider or Dragon, we'll pick
 * the Dragon.
 *
 */
#ifndef RDPAIR_H
#define RDPAIR_H

#include "rider.h"
#include "dragon.h"

class RD_Pair
{
public :
    RD_Pair( ) = default;
    /*
     * overloaded constructor
    RD_Pair( const Dragon& d, const Rider & r, const std::string& weyr );
    */

    /*
     * function prototypes for operations on Dragon and/or Rider
     * PleaSe read the assignment for more details
    void addDragonMission( );
    void incAge( );
    void changeRank( const std::string& newRank );
    */

    /*
     * Function prototypes to display the 3 parts of the RD_Pair
     *
    void displayRider( ) const;
    void displayDragon( ) const;
    void displayWeyr( ) const;
    */


    const std::string& getWeyrName( ) const { return weyr; }
    const Dragon& getDragon( ) const { return d; }
    const Rider& getRider( ) const { return r; }

    //We need to be able create, read and write Dragon \ Rider pairs
    /*
     * overloaded friend functions for input and output
     * NOTE: you might not need all of the input operators, you will
     *       find using the output operators very useful
     *
    friend std::ostream& operator << (std::ostream& os, const RD_Pair & rd );
    friend std::ofstream& operator << (std::ofstream& fout,
                                       const RD_Pair & rd );
    friend std::istream& operator >> (std::istream& is, RD_Pair & rd );
    friend std::ifstream& operator >> (std::ifstream& fin, RD_Pair & rd );
    */

private :
    Dragon d;
    Rider r;
    std::string weyr;
};
