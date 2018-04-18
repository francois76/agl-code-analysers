#!/bin/bash

for f in $(ls *.c); do
	frama-c -val ${f#"*.c"} >> report.log
done