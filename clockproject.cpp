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
        meridianHour = makeMeridianHour(userHour);
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
                formatHour = formatTime(userHour);

                break;

            }

            case 2:
          {
                userMinute++;
                if (userMinute >= 60)
                {
                    userHour++;
                    userHour = maxHour(userHour);
                    formatHour = formatTime(userHour);

                    userMinute = maxMinute(userMinute);
                    formatMinute = formatTime(userMinute);


                    break;
                }
                else
                {

                    userMinute = maxMinute(userMinute);
                    formatMinute = formatTime(userMinute);

                    break;
                }
          }

            case 3:
            {
                userSecond++;

                if (userSecond >= 60)
                {
                    userMinute++;
                    if (userMinute >= 60)
                    {
                        userHour++;
                        userHour = maxHour(userHour);
                        formatHour = formatTime(userHour);

                        userMinute = maxMinute(userMinute);
                        formatMinute = formatTime(userMinute);


                        userSecond = maxSecond(userSecond);
                        formatSecond = formatTime(userSecond);
                        break;
                    }
                    else
                    {

                        userMinute = maxMinute(userMinute);
                        formatMinute = formatTime(userMinute);

                        userSecond = maxSecond(userSecond);
                        formatSecond = formatTime(userSecond);
                        break;
                    }
                }
                else
                {
                    userSecond = maxSecond(userSecond);
                    formatSecond = formatTime(userSecond);
                    break;
                }
                

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

