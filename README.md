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

![View_2](https://user-images.githubusercontent.com/34675907/131215708-fef1dad2-fdb8-4e07-a98b-d862ff93f91e.png)


## Game Instructions

![View_1](https://user-images.githubusercontent.com/34675907/130333109-82015ea8-3cdb-4a6b-b88f-d6dcc773dc57.png)

In progress!
