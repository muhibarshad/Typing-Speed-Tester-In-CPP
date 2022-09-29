
#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;
void Calcualting_completeSentence(char *&str, const char currentLetter, int &totalLetters)
{
    char *temp = new char[totalLetters + 1];
    for (int i = 0; str[i] != '\0'; i++)
    {
        temp[i] = str[i];
    }
    temp[totalLetters - 1] = currentLetter;
    temp[totalLetters] = '\0';
    delete[] str;
    str = temp;
    totalLetters++;
}
void spaces() { cout << "\n\n\n"; }
void paragraph()
{
    spaces();
    cout << "\t\t WELCOME TO THE SALIK TYPING SPEED TEST\n";
    spaces();
    cout << "Being human makes us susceptible to the onset of feelings. The role of these emotions varies. Some of them are useful while others may be harmful. The use of social media for self-expression has reached a point that it makes us feel we can say anything. This begins when we see people expressing anything and everything that come to mind. When we see everyone else voicing their likes and dislikes, their irritations and desires we tend to imitate what they do. And because many engage in this, we think that it is normal and healthy. However, when we get used to unbridled self-expression, we come to believe that all feelings are valid. We become convinced that in real life, we should also act on our emotions and our impulses. Using social media this way erodes our ability to regulate our actions and reactions. To illustrate, when something small irritates us we think that it's okay to feel this way. But isn't it better to foster one's patience and resilience instead of immediately complaining? Or when we develop an attraction to someone despite that person being in a relationship, and because social media has conditioned us that all feelings can be expressed, we tend to think that acting on this attraction is okay. Not all feelings deserve expression. We find ourselves creating our own problems when we let our present emotions control our actions.\n";
    spaces();
}
int UI(char &currentLetter)
{
    paragraph();
    cout << "To start the Test press enter \'S-key\' \n";
    currentLetter = getch();
    currentLetter = tolower(currentLetter);
    while (currentLetter != 's')
    {
        cout << "Please press the valid key : \n";
        currentLetter = getch();
    }
    cout << "\t\t\t YOUR TEST STARTS, start typing \n\n\n";
    return time(0);
}
void timePassedAway(int startTime)
{
    int currentTime = time(0);
    int sec = currentTime - startTime;
    int min = 0, hour = 0;
    if (sec > 59)
    {
        min++;
        sec = 0;
    }
    if (min > 59)
    {
        hour++;
        min = 0;
        sec = 0;
    }

    cout << "Time passed : " << hour << " : " << min << " : " << sec << "\n";
}
void displayingSentences(char &currentLetter, char *&str, int &totalLetters, int startTime)
{
    while (currentLetter != 13)
    {
        currentLetter = getch();
        if ((currentLetter >= 32 && currentLetter <= 126) || currentLetter==13)
        {
            Calcualting_completeSentence(str, currentLetter, totalLetters);
            system("cls");
            int currentTime = time(0);
            paragraph();
            cout << "\n\nTotal Letters = " << totalLetters - 1 << "\n";
            timePassedAway(startTime);
            spaces();
            for (int i = 0; str[i] != '\0'; i++)
            {
                cout << str[i];
            }
            spaces();
            spaces();
            cout<<"To END : PRESS ENTER-KEY\n";
        }
        else
        {
            currentLetter = getch();
        }
    }
}

int main()
{
    int totalLetters = 1;
    char *str = new char[totalLetters]{'\0'};
    char currentLetter = 13;
    int startTime = UI(currentLetter);
    displayingSentences(currentLetter, str, totalLetters, startTime);

    delete[] str;
    str = nullptr;

    return 0;
}
