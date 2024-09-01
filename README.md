# Week35-HelloWorld
## Introduction
Hello students! I am your Teaching Assistant, Alexander Linde Lossius. My job will be to provide you all with assistance, and create excercises for you to work on during lab time. If you need any help or encounter problems during please @ me in the class discord, my discord ID is herrkrabbe.

My plan for this week's excersises are

1. Set up a Github account
2. Cloning this project
3. Opening Visual Studio Solution
4. Coding

I am expecting all parts to take a while, because of a multitude of problems you can't predict beforehand. So remember to share the solutions to the problems you are facing, and ask others for help!
## Part 1: Setting up Github
The first thing you need is an account on this website, so go make one.

Welcome back! Now you will need a good way to download a git project onto your PC. Personally I use git Bash and Git Kraken because they enable more advanced control git; Most sudents in my class prefer to use Github Desktop. [There is a multitude of options!](https://git-scm.com/downloads/guis). So choose whatever you want, here are my recommendations.

### Git Bash
[Git Bash](https://git-scm.com/downloads) is a terminal for using git commands. It allows for full functionality of github, and is nice to have if you ask me to resolve issues with your other options. Such issues will include merge issues, but you will find out about those when you encounter them.

In addition to downloading Git Bash you will also need to [set up Git on your PC](https://docs.github.com/en/get-started/getting-started-with-git/set-up-git). I use SSH keys on my computer, and they work quite well.

### Github Desktop (Recommended)
[Github Desktop](https://desktop.github.com/download/) has a nice UI, and makes downloading and uploading easy without needing to set up an SSH key.

### GitKraken Desktop
[GitKraken](https://www.gitkraken.com/git-client) is an advanced user option, for when you want ease of use from Github Desktop and the control of Git Bash. GitKraken costs money, but is free for students if you are part of [Github Education](https://docs.github.com/en/education/explore-the-benefits-of-teaching-and-learning-with-github-education/github-education-for-students/apply-to-github-education-as-a-student). What i like with GitKraken is how easy it makes resolving merge issues with binary files, which will happen when you work cooperatively using Unreal Engine next semester.

## Part 2: Cloning
Now you need to download this Github repository onto your computer in order to work on it. This is a little bit different on all github applications, so google is your friend!

### Git Bash
1. On the Github Repository, click the big button which says <>Code
2. Select SSH, and copy
3. Use the commands `cd` and `ls` to navigate to your desired folder/directory (Notes below*)
4. use the command `git clone (copied text)`. pasting is a bit strange in git bash, try right click and paste

*`ls` shows you which folders and files exist in your current folder. `cd` lets you open a folder. `cd /D` lets you open the D disk. `cd ..` navigates to the parent folder.

### Github Desktop
[Follow this guide](https://docs.github.com/en/desktop/adding-and-cloning-repositories/cloning-a-repository-from-github-to-github-desktop)

### GitKraken
1. Open GitKraken
2. In GitKraken press File in top left
3. Clone Repo

## Part 3: Visual Studio
Now that you have cloned the github project, you need to open the visual studio solution. Your C++ code is stored in projects, and a visual studio solution holds several projects. I have tried hard to make it easy for you to open the project, so i hope it works. Please tell me if this does not work!

1. Find the directory you cloned the project to
2. open the file ending with `.sln`, in this case `Week35.sln`.

If step 2 didn't work, try to use Open With then select Visual Studio
