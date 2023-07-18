#/bin/bash
read -o "enter the commit name " commit_name
git add .
git commit -m "$commit_name"
git push
