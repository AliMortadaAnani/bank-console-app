#include "clsLoginScreen.h"
#include <iostream>
int main()

{
    char Exit_Program = 'n';
    while (Exit_Program != 'y' && Exit_Program != 'Y')
    {
        clsLoginScreen::ShowLoginScreen();
        cout << "\n\n\nExit Program ?? [y/n]\n";
        cin >> Exit_Program;
        //cout << "Exiting Program ...\n";
    }

    //system("pause>0");
    return 0;
}