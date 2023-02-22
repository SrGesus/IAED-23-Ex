#!/usr/bin/env sh
# Simple bash script to pull and organize the exercises from the other repository
for lab in ../Labs/lab*; do
    mkdir -p ${lab: -5}
    for ex in $lab/ex*; do
        cp $ex/*.c ${lab: -5}/
    done
done