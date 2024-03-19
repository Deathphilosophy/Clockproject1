#include <iostream>
#include "Header.h"




int main()
{
    int userInput = 0;
    int userHour;
    std::cout << "Please enter current hour in military form (1-24):\n";
    std::cin >> userHour;
    userHour = maxHour(userHour);
    std::string formatHour = formatTime(userHour);


    int userMinute;
    std::cout << "Please enter current minute:\n";
    std::cin >> userMinute;
    userMinute = maxMinute(userMinute);
    std::string formatMinute = formatTime(userMinute);

    int userSecond;
    std::cout << "Please enter current second:\n";
    std::cin >> userSecond;
    userSecond = maxSecond(userSecond);
    std::string formatSecond = formatTime(userSecond);

    string meridianHour = makeMeridianHour(userHour);


    // menu loop


    while (userInput != 4) {

        clockDisplay(meridianHour, formatHour, formatMinute, formatSecond);
        // menu
        menuDisplay();

        cin >> userInput;
        switch (userInput)
        {
            case 1:
            {
                userHour++;
                userHour = maxHour(userHour);
                std::string formatHour = formatTime(userHour);
            }

            case 2:
         {
                break;
          }

            case 3:
            {
                userSecond++;

            break;

        }

        case 4:
        {
            userInput = 4;
            break;
        }

        default:
        {
            cout << "invalid input. Please try again." << endl;
            break;
        }
        }
    }
}

