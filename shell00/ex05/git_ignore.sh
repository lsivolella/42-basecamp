#!/bin/sh

git status --ignored -s --untracked-files=all | grep '!!' | cut -c 4-