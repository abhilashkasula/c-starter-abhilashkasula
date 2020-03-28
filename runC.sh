#!/bin/bash

filename=$1
file=`echo $filename | grep -o '/.*' | sed 's/\///'`

gcc ./$filename -o outputs/$file && outputs/$file
