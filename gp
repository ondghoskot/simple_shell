#!/bin/bash
echo "enter your commit message:"
read gitPush

git add .
git commit -m "{$gitPush}"
echo "$gitPush" >> README.md
git push
