git init --> For initing new git repos  
git status --> To view the status of repo
git add <file_name>--> To make file staged (move it to index)
git add . --> This means (.) All files (except .gitignore)
git commit -m "Commit massage" --> Moving files from index to archive
git commit -am "Coommit massage" --> To add and commit at same time(Only for modified, it doesn't work with new files)
git remote add origin https://github.com/someGitAcc/someGitReps.git --> To connect your repo to GitHub
git push -u origin <brench_name> --> To push your commits to remote repo
git push -u origin master --> To set the default location of pushing(After that you can type just git push)
git config --global user.name <your_username> --> To see or enter the new Username
git config --global user.email <your_email> --> To see or enter the new email
git branch <branch_name> --> To see or add new branch in your repo
git branch -d <branch_name> --> To delete the branch
git checkout <branch_name> --> To change your current branch
git checkout -b <brenc_name> --> To make new branch
git clone <https://github.com....> --> Clone this repo to current directory
git pull origin <master>--> To Download changes from remote repo to local machine
git remote -v --> To see any remote repositories connected to this repo
git diff <branch_name> --> Showing differencies between that branch and current branch 
git merge <branch_name> --> Merging current and selected branches
git reset <file_name> --> Unstaging the file (Deleting from index, opposite of add)
git push origin :<branch_name> --> Removing branch remotely
git log --> To see all your changes and commits