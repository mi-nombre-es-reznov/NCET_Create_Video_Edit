# NCET_Create_Video_Edit
The purpose of this program is to help automate the process of finding needed edits in YouTube videos prior to editing. This program is to take input, format data, and write a .txt file to a given location on Google Drive.

## What is this program expected to do?
This program is expected to create a .txt file using the information provided to create a roadmap of what needs to be edited on its respective video.

This file is to be placed in its respective folder on Google Drive for the Graphics Designer/Video Editor to see and use as the guide regarding which edits need to be done and the time at which it needs to be done at.

## To-Do List
-  [X] Get necessary information about video
   -  [X] Bound Input
   -  [X] Take length of video
   -  [X] Take file path from user
   -  [X] Test validity of file location
      -  [X] Create a file at given location: If pass - delete; Else Loop until valid

-  [X] Take input from user
   -  [X] A list of times and descriptions for that time
   -  [X] Bound check times between 00:00 :arrow_right: MAX(video time)
   -  [X] Have the ability to select from a preset list of descriptions
      -  [X] Delete loading screen
      -  [X] Start Video Here
      -  [X] Start Here
      -  [X] Continue Here
      -  [X] End Video Here
      -  [X] End Video with White Background
      -  [X] Blur notification
      -  [X] Custom
-  [X] Format data to be written to .txt file
-  [X] Write all necessary, formatted data to .txt file
   -  [X] Hardcode a name that exists across all files *(Maybe __To-Do.txt__)*
-  [X] Save .txt file to a specific location (__Google Drive__)

## Possible Languages to be used?
* C++
> Language of choice for beginning iteration of project.
* Python
> May try and use together with C++ or recreate in later iterations.
* Django
> Eventually, this will be the language of choice for a GUI iteration.

## Future Plans?
1. Scale program to be able to be used across multiple Windows devices.
2. Scale program to be able to be used across multiple Operating Systems (OS).
3. Make the program more aesthetically pleasing in terminal.
4. Make bound checks very detailed.
5. Convert terminal-based program into a Graphical User Interface (GUI) program.
6. Scale GUI to multiple Windows devices.
7. Scale GUI to multiple OS's.