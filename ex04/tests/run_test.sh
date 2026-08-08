#!/bin/bash

BIN=../replace
PASS=0
FAIL=0

run_case() {
    local name=$1
    local input=$2
    local s1=$3
    local s2=$4
    local expected=$5

    cp "$input" "/tmp/${name}.txt"

    $BIN "/tmp/${name}.txt" "$s1" "$s2" > /dev/null 2>&1

    if diff -q "/tmp/${name}.txt.replace" "$expected" > /dev/null 2>&1; then
        echo "PASS: $name"
        PASS=$((PASS+1))
    else
        echo "FAIL: $name"
        FAIL=$((FAIL+1))
    fi
}

run_case "basic" basic.txt "aa" "bb" basic.expected
run_case "empty_s1" empty.txt "a" "x" empty.expected

echo "----"
echo "Passed: $PASS, Failed: $FAIL"