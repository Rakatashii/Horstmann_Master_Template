// ----------------------------------------------------------------------------
//
// ---------------------- [Untitled Program.  Name Me!] -----------------------
//
// ----------------------------------------------------------------------------
//
//  Program Name:			[Untitled Program.  Name Me!]
//
//  Program Description:	[Describe this program!]
//
//  Author:					[Your Name Here!]
//  Course:					[Course Name]
//  Date:					YYYY-MM-DD
//
// ----------------------------------------------------------------------------

#include <iostream>
//--------------------Add The Rest of Your Includes Here!--------------------//
#include "ccc_x11.h"
#include "ccc_shap.h"

using namespace std ;

// ----------------------------------------------------------------------------
//
// -------------------------------- Prototypes --------------------------------
//
// ----------------------------------------------------------------------------



// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------

int ccc_win_main()
{
	// -------------------------[Insert Code Here!]----------------------------
	Point origin(0,0) ;
    Point p(4, 2.5);
    Line myLine(origin, p);
    Circle smallCircle(p, 2.2);
    Circle bigCircle(origin, 6);
    cwin << origin << p << myLine
    << smallCircle << bigCircle;
    
    return 0;
}

// ----------------------------------------------------------------------------
//
// ------------------------------- Sub Programs -------------------------------
//
// ----------------------------------------------------------------------------


