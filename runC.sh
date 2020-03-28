#!/bin/bash

filename=$1
file=`echo $filename | grep -o '^[^\.]*'`

gcc ./$filename -o outputs/$file && outputs/$file
