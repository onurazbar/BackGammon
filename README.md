# BackGammon

This is a console based backgammon game! Game software is developed via C++ upon an object oriented concept.


## Project Scheme

All source(.cpp) and header(.hpp) files are placed inside the source folder **src**. There is also **GameView** folder that contains some game scenes but I do not prefer to add to the repo. So it is ignored inside gitignore. Besides there are also **Makefile** and **README** files.


## Build Instructions

There is a **Makefile** to compile the source codes and create the executable game file. To build the project go to root directory **BackGammon** and simply type below command:

**make**

During first build, all the source files will be compiled and the executable game file will be created. However in later builds, only the modified and dependent source files will be compiled again.

When building the project, object folder **obj** will be created and corresponding object files will be created under this folder. Then binary folder **bin** will be created and executable game file will be created under this folder after objects are linked.

If you want to make a clean build by removing output folders and files, type below command:

**make clean**

This will remove **bin** and **obj** folders and all their contents. Then type **make** commmand again.

![View_1](https://user-images.githubusercontent.com/34675907/131223176-43e93668-9954-4fe9-b4bf-7f026f22534d.png)


## Game Instructions

When you build the project, executable game file **backgammon** will be created under **bin** folder. To run the game go to **bin** folder run the executable file like below;

**./backgammon**

![View_2](https://user-images.githubusercontent.com/34675907/131223184-677afcaa-1003-44a6-a456-8443435898db.png)


The game mode is single player and you will play againts the computer. To make following the gameplay easier, at each step game is stopped and not proceed until you press a key. Therefore you need to press a key for the actions to be taken like rolling the dices, letting computer to roll dices and making its moves etc. At each step several instructions will be displayed and following them will be enough to play the game.


In progress!
