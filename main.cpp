/*
 * File Name:    main.cpp
 *
 * Author:        Your Name
 * Creation Date: Tuesday, August 13 2019, 18:15
 * Last Modified: Thursday, September 05 2019, 00:21
 *
 * File Description:
 *
 * This is the main driver file for Assign A of CSE1CPP
 * Semester 2 2019
 *
 */
#include "main.h"

int main( )
{
    WEYR weyrs;

    int count {0};

    load( weyrs, count);

    run( weyrs, count );

    return 0;
}

void run( WEYR weyrs, int & count)
{
    int choice { -1 };
    while( choice != static_cast<int>(MAIN_MENU::EXIT ))
    {
         displayMainMenu( );
         std::cout << "Enter choice >> ";
         // this would be a good place to use your getInt( )
         // function from Lab 2, Question 5.
         // copy the getInt( ) function into main.h
         // then you can go
         // choice = getInt( );
         // that way your program is not going to crash if the
         // user accidently enters something that is not an integer
                                                              
 std::cin >> choice;
         std::cin.ignore( 10000, '\n' );
         process( weyrs, choice, count );
    }
}

void displayMainMenu( )
{
    std::cout << "\n\tMain Weyr Menu\n" ;
    std::cout << static_cast<int>(MAIN_MENU::ADD) <<
                 ". Add a Dragon \\ Rider pair " << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::DISPLAY) <<
                 ". Display Menu" << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::ASSIGN_MISSION) <<
                 ". Assign a Fall" << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::INC_AGE) <<
                 ". Increment age" << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::CHANGE_RANK) <<
                 ". Change Rank" << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::SAVE) <<
                 ". Save to file" << std::endl;
    std::cout << static_cast<int>(MAIN_MENU::EXIT)
              << ". Close the program " << std::endl;
}

void process( WEYR weyr, int choice, int & count )
{
    switch( choice )
    {
         case static_cast<int>(MAIN_MENU::ADD ):
             add( weyr, count );
           break;
 case static_cast<int>(MAIN_MENU::DISPLAY ):
             display( weyr, count );
           break;

         case static_cast<int>(MAIN_MENU::ASSIGN_MISSION):
             assignMission( weyr, count );
           break;

         case static_cast<int>(MAIN_MENU::INC_AGE ):
             incAge( weyr, count );
           break;

         case static_cast<int>(MAIN_MENU::CHANGE_RANK ):
             changeRank( weyr, count );
           break;

         case static_cast<int>(MAIN_MENU::SAVE ):
             save( weyr, count );
           break;

         case static_cast<int>(MAIN_MENU::EXIT ) :
             std::cout << "\nThank you for using the Pern program"
                       << std::endl
                       << "Happy Flying, stay safe and get that Thread\n"
                       << std::endl;
           break;

         default:
              std::cerr << "That is not a valid menu choice"
                        << std::endl;
           break;

    }
}

/*
 * This function is called before the program shows the main menu.
 * The user is asked for the name of an input text file.
 * If the file is found and can be opened, then the file is read into
 * the array.
 * The format of the file is guaranteed to be corect and the file,
                                                                     

         
 * if it exists, will not be empty.
 * See page 11 of the assignment for the format
 *
 * Then the file is closed and all interactions are with the array,
 * the only exception being when the user chooses main menu choice 6,
 * save to file.
 *
 */
void load( WEYR w, int & count )
{

}

/*
 * This function displays all the Dragon \ Rider pairs in the array
 * That is, all the RD_Pair objects that have non-default values.
 * Hint: This is why we pass in the count parameter. We want to
 *       display only the parts of the array that we have put
 *       RD_Pairs into.
 *       We could display the whole, it won't crash, but it will show
 *       a lot of entries that are just the default values.
 *       Recall that we call the default constructor for each
 *       element of the array
 *
 */
void displayAll( const WEYR w, int count )
{

}

/*
 * This is the display menu top level, fully implemented,
 * no need to touch this
 *
 */
void display( const WEYR w, int count )
{
   int choice { -1 };

                       while( choice != static_cast<int>(DISPLAY_MENU::EXIT ) )
   {
         displayDisplayMenu( );
         std::cout << "\nEnter choice >> ";
         std::cin >> choice;
         std::cin.ignore( 100000, '\n' );
         processDisplay( w, choice, count );
   }
}

/*
 * This function is fully implemented
 *
 */

void processDisplay( const WEYR w, int choice, int count )
{
    switch( choice )
    {
         case static_cast<int>(DISPLAY_MENU::ALL):
              displayAll( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::RIDERS):
              displayRiders( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::DRAGONS):
              displayDragons( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::SINGLE_WEYR):
              displaySingleWeyr( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::SINGLE_PAIR):
              displaySinglePair( w, count );
           break;

 case static_cast<int>(DISPLAY_MENU::SINGLE_RIDER):
              displaySingleRider( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::SINGLE_DRAGON):
              displaySingleDragon( w, count );
           break;

         case static_cast<int>(DISPLAY_MENU::EXIT):
              // just trap this choice so that it doss not show as
              // an error
           break;

    }
}

/*
 * This function is fully implemented
 *
 */
void displayDisplayMenu( )
{
    std::cout << "\nDisplay Menu" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::ALL) << ". " <<
                 "Display All" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::RIDERS) << ". " <<
                 "Display Riders only" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::DRAGONS) << ". " <<
                 "Display Dragons only" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::SINGLE_WEYR) << ". " <<
                 "Display Single Weyr" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::SINGLE_PAIR) << ". " <<
                 "Display Single Rider \\ Dragon Pair" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::SINGLE_RIDER) << ". " <<
                 "Display Single Rider" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::SINGLE_DRAGON) << ". " <<
                 "Display Single Dragon" << std::endl;
    std::cout << static_cast< int >(DISPLAY_MENU::EXIT) << ". " <<
                 "Return to main menu" << std::endl;

}
                  /*
 * This function will display all the Riders in the array, all of
 * the non-default ones, of course. This just displays Riders, no
 * Dragon or Weyr information
 *
 */
void displayRiders( const WEYR w, int count )
{

}

/*
 * To add a Dragon \ Rider pair, the Dragon name must be unique
 * amonst Dragons and the Rider name must be unique amongst Riders.
 *
 * You must both a Dragon and a Rider as a pair, you cannot add one
 * without the other.
 *
 * Whether you go back to the main menu or continue if the user
 * enters a Rider \ Dragon name that is not unique is up to you.
 * You can continue to ask the user to input a unique name if you want to,
 * even though the assignment says to go back to the main menu
 *
 * Enter the Dragon name (or the Rider name, it doesn't matter which
 * order you do things in). If the Dragon name is unique (use your
 * function for finding the index of a Dragon \ Rider pair based on
 * the Dragon name). If the Dragon name is unique the index will be -1
 *
 * Prompt the user to enter all the other information about a Dragon,
 * colour, wingspan and length. Age and missions will be 0.
 * Store these in local variables
 *
 * Then ask the user for the name of a Rider. Again, search the array
 * to see if there is already with this name. If there isn't (the index
 * returned is -1) then ask the user for the age of the Rider. The Rank
 * will be "Rookie"
 *
 * Store these in local variables
 *
 * Now ask the user for the Weyr name.
 *
 * Now you have all the information required. Instantiate (create) a
                                       * Dragon object using the local varaiables as parameters, then
 * instantiate a Rider object, using the local variables for Rider
 *
 * Now instantaite an RD_Pair objects, you have the 3 parameters
 * Dragon, Rider and weyr, and add that object to the array, increase the
 * count by 1 and return to the main menu.
 *
 */
void add( WEYR w, int & count )
{

}

/*
 * This function displays all the Dragons in the array, except the
 * default ones, of course. Juast the Dragons, no Rider or weyr
 * information
 *
 */
void displayDragons( const WEYR w, int count )
{

}

/*
 * This function firstly prompts (asks) the user for the name of a
 * Weyr. The function them goes through the array (as always the
 * non-default part) and displays all the information for a
 * Dragon \ Rider pair (RD_Pair) if the weyr name of the element
 * matches the user entered weyr name
 *
 * If the program goes through of the non-default elements and does
 * find a single match for the weyr name, then an appropriate
 * message is displayed on the screen
 *
 */
void displaySingleWeyr( const WEYR w, int count )
{

}
/*
 * This function prompts (asks) the user to enter the name of a
 * Rider. If the Rider with that name is found in the array, then
 * all information about that Dragon \ Rider pair (the whole RD_Pair)
 * and the weyr are displayed to the screen
 *
 * If the user entered name is not found in the array, an appropriate
 * message is displayed to the screen.
 *
 * Hint use your find_Rider function
 *
 */
void displaySinglePair( const WEYR w, int count )
{

}

/*
 * This is the first of the search functions. This function takes
 * the name of a Dragon as a parameter, along with the array and
 * the count. This function searches through the array
 * for the Dragon with this name (recall that Dragon names are
 * unique) and return the index of the array at which this
 * Dragon was found.
 *
 * If the function gets through all of the non-default part of the
 * array without finding the Dragon name, then the function
 * returns -1
 *
 */
int find_Dragon( const WEYR w, const std::string & dragonName,
                 int count )
{
    int index { -1 };

    return index;

}

/*
 * This is the second of the search functions. This function takes
 * the name of a Rider as a parameter, along with the array and
 * the count. This function searches through the array
 * for the Rider with this name (recall that Ridernames are
 * unique) and return the index of the array at which this
 * Rider was found.
 *
 * If the function gets through all of the non-default part of the
 * array without finding the Rider name, then the function
 * returns -1
 *
 */
int find_Rider( const WEYR w, const std::string & riderName,
                int count )
{
    int index { -1 };

    return index;

}

/*
 * This is the third of the search functions. This function takes
 * the name of a weyr as a parameter, along with the array and
 * the count. This function searches through the array
 * for the Weyr with this name. Weyr names are not unique so this
 * function just returns the first index that matches the Weyr name,
 * there will be others potentially.
 *
 * If the function gets through all of the non-default part of the
 * array without finding any instance of the Weyr name, then the function
 * returns -1
 *
 */
int find_Weyr( const WEYR w, const std::string & weyrName,
               int count )
{
    int index { -1 };

                             return index;

}


/*
 * This function prompts (asks) the user for the name of a Rider.
 * The function searches the array (or calls the find_Rider function)
 * If the Rider with the user entered name is found, then the
 * information about that Rider is displayed.
 *
 * If no Rider with that name is found, then an appropriate message is
 * displayed to the screen
 *
 */
void displaySingleRider( const WEYR w, int count )
{

}

/*
 * This function prompts (asks) the user for the name of a Dragon.
 * The function searches the array (or calls the find_Dragon function)
 * If the Dragon with the user entered name is found, then the
 * information about that Dragon is displayed.
 *
 * If no Dragon with that name is found, then an appropriate message is
 * displayed to the screen
 *
 */
void displaySingleDragon( const WEYR w, int count )
{

}

/*
 * This function prompts the user for the name of an output text
 * file. If the file with this name can be opened, then the contents
 * of the array are written to the output file and the output file
 * is closed.
 *
                      * The output file name does not have to be the same as the input
 * file name.
 *
 * Be very careful to write the output file in exactly the same format
 * as the input file (see page 11 of the assignment). You have to be
 * able to use your output file as an input file the next time the
 * program is run.
 *
 * The program does not exit, it returns to the main menu
 *
 */
void save( const WEYR w, int count )
{

}

/*
 * This function increases the age (by 1) of all Riders and Dragons
 *
 */
void incAge( WEYR w, int count )
{

}

/*
 * This function assigns a Weyr to fight a Thread Fall
 * Dragons must be at least 2 years old to fight Thread
 *
 * Assume that a Fall lasts only one iteration of the menu.
 * Meaning that when the menu is shown again, the mission is over
 * and the Weyr is ready again.
 *
 * There is no need to check if the Weyr is already on a Fall
 *
 * The number of missions flown by each Dragon of the Weyr who flies the
 * Fall is incremented by 1
 *
 * If the function has gone through the non-default parts of the
 * array and not found one weyr name that matches the user entered
                                       * weyr name, then an appropriate error message is displayed to the
 * screen.
 *
 * Also if we do find the weyr name, but do not find any dragons
 * qualified to fly a Fall (that leaves out Dragons under 2 years old
 * and Queen dragons) then an appropriate message is shown to the
 * screen.
 *
 */
void assignMission( WEYR w, int count )
{

}

/* This function allows the user to change the rank of a Rider
 * The initial user input is the name of the Rider. Provide that
 * the Rider with that name is found in the array, the user
 * is prompted (asked) to enter the new rank.
 *
 * If no Rider with that name is found, then an appropriate
 * message is displayed to the screen.
 *
 */
void changeRank( WEYR w, int count )
{

}

                 
