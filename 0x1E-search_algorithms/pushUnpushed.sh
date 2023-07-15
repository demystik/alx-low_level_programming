#!/bin/bash

# Change to your repository URL
#REPO_URL="git@github.com:username/repository.git"

# Change to your commit message
COMMIT_MESSAGE="Update"

# Go to the current working directory
cd "$(pwd)"

# Loop through each unpushed file
for file in $(git status -s | awk '{print $2}'); do
    # Add the file to the staging area
    git add "$file"

    # Commit the changes with the same commit message
    git commit -m "$COMMIT_MESSAGE"

    # Push the changes to the repository
    git push
done

