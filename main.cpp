#include "FEHLCD.h"
#include <FEHImages.h>

int main()
{
    FEHImage menuBg;

    /* Background image for menu screen */
    menuBg.Open("MenuBG.png");
    menuBg.Draw(0, -10);
    
    /* Buttons on menu */
    LCD.SetFontColor(LIGHTBLUE);
    LCD.FillRectangle(40, 115, 100, 40);
    LCD.FillRectangle(175, 115, 100, 40);
    LCD.FillRectangle(40, 175, 100, 40);
    LCD.FillRectangle(175, 175, 100, 40);
    LCD.SetFontColor(WHITESMOKE);
    LCD.DrawRectangle(40, 115, 100, 40);
    LCD.DrawRectangle(175, 115, 100, 40);
    LCD.DrawRectangle(40, 175, 100, 40);
    LCD.DrawRectangle(175, 175, 100, 40);
    LCD.SetFontColor(BLACK);
    LCD.SetFontScale(0.5);
    LCD.WriteAt("Play", 78, 128);
    LCD.WriteAt("How to Play", 192, 128);
    LCD.WriteAt("Leaderboard", 55, 188);
    LCD.WriteAt("Credits", 203, 188);

    while (1) {
        LCD.Update();
        // Never end
    }
    return 0;
}
