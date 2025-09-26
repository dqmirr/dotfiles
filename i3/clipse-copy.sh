#!/bin/bash
# Capture current clipboard content and send to clipse
xclip -o -selection clipboard | clipse -a
