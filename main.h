/*
 * File Name:    main.h
 *
 * Author:        Your Name
 * Creation Date: Wednesday, August 14 2019, 12:17
 * Last Modified: Wednesday, August 21 2019, 11:16
 *
 * File Description:
 *
 */
#include "dragon.h"
#include "rider.h"
#include "rdpair.h"
#include <cstdint>

constexpr int WEYR_SIZE = 50;

using WEYR = RD_Pair[ WEYR_SIZE ];

enum class MAIN_MENU : int
           { ADD = 1, DISPLAY, ASSIGN_MISSION,
             INC_AGE, CHANGE_RANK, SAVE, EXIT };
enum class DISPLAY_MENU : int
           { ALL = 1, RIDERS, DRAGONS, SINGLE_WEYR, SINGLE_PAIR,
             SINGLE_RIDER, SINGLE_DRAGON, EXIT };

void run( WEYR w, int & count );
void displayMainMenu( );
void load( WEYR w, int & count );
int find( const std::string& dragonName, const WEYR w, int count );
void display( const WEYR w, int count );
void displayAll( const WEYR w, int count  );
void add( WEYR w, int & count );
void process( WEYR w, int choice, int & count );
void processDisplay( const WEYR w, int choice, int count );
void displayDisplayMenu( );
void displayRiders( const WEYR w, int count );
void displayDragons( const WEYR w, int count );
void displaySingleWeyr( const WEYR w, int count );
void displaySinglePair( const WEYR, int count );
void displaySingleRider( const WEYR w, int count );
void displaySingleDragon( const WEYR w, int count );
                                                     
int find_Dragon( const WEYR w, const std::string & DragonName,
                 int count ) ;
int find_Rider( const WEYR w, const std::string & RiderName,
                int count ) ;
int find_Weyr( const WEYR w, const std::string & WeyrName,
               int count ) ;
void save( const WEYR w, int count );

void incAge( WEYR w, int count );
void assignMission( WEYR w, int count );
void changeRank( WEYR w, int count );
