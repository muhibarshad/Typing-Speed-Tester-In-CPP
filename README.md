# 


<h1 align="center" style="font-size: 52px;" > Welcome to Typing-Speed-Tester  👋</h1>

![GitHub top language](https://img.shields.io/github/languages/top/muhib7353/Typing-Speed-Tester-In-CPP?logo=c%2B%2B&style=flat-square)
![GitHub repo size](https://img.shields.io/github/repo-size/muhib7353/Typing-Speed-Tester-In-CPP)
![GitHub](https://img.shields.io/github/license/muhib7353/Typing-Speed-Tester-In-CPP)
![GitHub followers](https://img.shields.io/github/followers/muhib7353?logo=Github&style=flat-square)
![GitHub User's stars](https://img.shields.io/github/stars/muhib7353?logo=Github&style=flat-square)
![GitHub commit activity](https://img.shields.io/github/commit-activity/y/muhib7353/Typing-Speed-Tester-In-CPP?logo=git)
![GitHub last commit](https://img.shields.io/github/last-commit/muhib7353/Typing-Speed-Tester-In-CPP?logo=git)
![GitHub language count](https://img.shields.io/github/languages/count/muhib7353/Typing-Speed-Tester-In-CPP?logo=c%2B%2B)

> Typing-Speed-Tester in `C++` by using `DYNAMIC MEMPRY ALLOCATION` and `CAHRACTER-ARRAYS` concepts. Its main features are show total words and letters you write, total time you consume, speed per minute, an additional backSpace run-time deletion functionality.

# ✨ Demo

`Typing-Speed-Tester` main feature is `run-time memory allocation` and `handling-characterArrays`.Main contain only `default` data, memory allocation and deallocation and one executed external function.

<p align="center">
  <img width="1000" src="My Video.gif" alt="demo"/>
</p>

### Example of code [main.cpp](/main.cpp):

```cpp
#include"_SBL_Features.h"

int main()
{

#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

void spaces();
string firstScreen();
void paragraph(string);
int UI(char &, string);
int timePassedAway(int &);
void userStatus(int, int, int, string);
void Calcualting_completeSentence(char *&, const char, int &, int &);
void displayingSentences(char &, char *&, int &, int &, string);

int main()
{
    int totalLetters = 1;
    char *str = new char[totalLetters]{'\0'};
    char currentLetter;

    string userName = firstScreen();
    int startTime = UI(currentLetter, userName);

    displayingSentences(currentLetter, str, totalLetters, startTime, userName);

    delete[] str;
    str = nullptr;

    return 0;
}


```
# Usage

### Default paragraph to write:

Being human makes us susceptible to the onset of feelings. The role of these emotions varies. Some of them are useful while others may be harmful. The use of social media for self-expression has reached a point that it makes us feel we can say anything. This begins when we see people expressing anything and everything that come to mind. When we see everyone else voicing their likes and dislikes, their irritations and desires we tend to imitate what they do. And because many engage in this, we think that it is normal and healthy. However, when we get used to unbridled self-expression, we come to believe that all feelings are valid. We become convinced that in real life, we should also act on our emotions and our impulses. Using social media this way erodes our ability to regulate our actions and reactions. To illustrate, when something small irritates us we think that it's okay to feel this way. But isn't it better to foster one's patience and resilience instead of immediately complaining? Or when we develop an attraction to someone despite that person being in a relationship, and because social media has conditioned us that all feelings can be expressed, we tend to think that acting on this attraction is okay. Not all feelings deserve expression. We find ourselves creating our own problems when we let our present emotions control our actions.

# 🚀 Features:
 Its main features are , , , an .
- How to use the `Dynamic Memory Allocation` .
- Character Arrays and run-time changing size of array with taking input .
- Real World Typing-Speed-Testing system .
- Show total words and letters you write.
- Show total time you consume.
- speed per minute (WsPM).
- Additional backSpace run-time deletion functionality
- All input validations are done .
- No memory leakage in run-time all dynamic memory is deallocated.

# 🤝 Contributing

Feel Free to contribute.
If you want to add some features and resolve any issues then just fork the repository. To want to change the code only in the one [main.cpp]() file then create `pull-request` to the master branch. I will review it and then i merge it to the branch. And same for the main branch also.

# Author

### 👨‍💻 Muhib Arshad

   <div align="center">
<p align="center">Let's connect!</p>

<a href="https://www.linkedin.com/in/muhib-arshad-85439b242/" target="blank">
    <img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" />
</a>

<a href="https://medium.com/@muhibarshad123" target="blank">
    <img src="https://img.shields.io/badge/Medium-12100E?style=for-the-badge&logo=medium&logoColor=white" />
</a>

<a href="https://stackoverflow.com/users/18215817/muhib-arshad?tab=profile" target="blank">
    <img src="https://img.shields.io/badge/Stack_Overflow-FE7A16?style=for-the-badge&logo=stack-overflow&logoColor=white" />
</a>

<a href = "https://twitter.com/muhib7353" target="blank">
    <img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white" />
</a>

<a href="https://www.facebook.com/muhib7353/" target="blank">
    <img src="https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white" />
</a>

<a href="https://www.instagram.com/muhib7353/" target="blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" />
</a>

</div>



## Show your support

Please ⭐️ this repository if this project helped you!

You can also follow my GitHub Profile to stay updated:
<a href="https://github.com/muhib7353" target="blank">
@muhib7353
</a>


## 📝 License

Copyright © 2022 [Muhib Arshad](https://github.com/muhib7353). 


This project is [MIT](https://github.com/muhib7353/Typing-Speed-Tester-In-CPP/blob/main/LICENSE) licensed.
