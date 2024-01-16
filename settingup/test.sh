#!/bin/bash

rm -rf results
mkdir results

green='\033[0;32m'
red='\033[0;31m'
clear='\033[0m'

for file in maps/*
do
    # echo $file
    ./setting_up $file > results/$(basename $file)
    if diff results/$(basename $file) solved/$(basename $file) > /dev/\
null
    then
        echo -e "${green}$(basename $file) OK${clear}"
    else
        echo -e "${red}$(basename $file) KO${clear}"
    fi
done