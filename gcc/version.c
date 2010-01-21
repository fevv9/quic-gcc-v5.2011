#include "version.h"

/* This is the location of the online document giving instructions for
   reporting bugs.  If you distribute a modified version of GCC,
   please configure with --with-bugurl pointing to a document giving
   instructions for reporting bugs to you, not us.  (You are of course
   welcome to forward us bugs reported to you, if you determine that
   they are not bugs in your modifications.)  */

const char bug_report_url[] = BUGURL;

/* The complete version string, assembled from several pieces.
   BASEVER, DATESTAMP, DEVPHASE, and REVISION are defined by the
   Makefile.  */

#define HEXAGON_BUILD_VERSION " : Hexagon Build Version (UNKNOWN) BT_201001212147_sundeepk"

const char version_string[] = BASEVER DATESTAMP DEVPHASE REVISION HEXAGON_BUILD_VERSION;
const char pkgversion_string[] = PKGVERSION;
