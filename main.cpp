#include "FEHLCD.h"
#include <FEHImages.h>

int main()
{
    /* Draw background image for menu screen */
    FEHImage menuBg;
    menuBg.Open("MenuBG.png");
    menuBg.Draw(0, -25);
    

    while (1) {
        LCD.Update();
        // Never end
    }
    return 0;
}
