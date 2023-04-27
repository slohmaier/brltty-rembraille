/* TODO Headers not needed?
#include "prologue.h"
// Include standard C headers
#include "Programs/brl.h"
#include "Programs/misc.h"
#include "Programs/scr.h"
#include "Programs/message.h"
/* Include other files */

typedef struct {
    int x, y; /* The dimensions of the display */
    int helpPage; /* The page number within the help file */
    unsigned char *buffer; /* The contents of the display */
    unsigned isCoreBuffer:1; /* The core allocated the buffer */
    unsigned resizeRequired:1; /* The display size has changed */
    unsigned int writeDelay;
    void (*bufferResized)(int rows, int columns);
} BrailleDisplay;

typedef struct {
    char *dummy;
} DriverCommandContext;

static void brl_identify()
{

}

static int brl_open(BrailleDisplay *brl, char **parameters, const char *tty)
{
    return -1;
}

static void brl_close(BrailleDisplay *brl)
{

}

static void brl_writeWindow(BrailleDisplay *brl)
{

}

static void brl_writeStatus(BrailleDisplay *brl)
{

}

static int brl_readCommand(BrailleDisplay *brl, DriverCommandContext context)
{
    
}

static int brl_writePacket(BrailleDisplay *brl, const unsigned char *packet, int size)
{

}

static int brl_readPacket(BrailleDisplay *brl, unsigned char *p, int size)
{

}

static void brl_rescue(BrailleDisplay *brl)
{

}
