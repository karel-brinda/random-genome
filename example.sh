#! /usr/bin/env bash

set -e
set -o pipefail
set -u

./random-genome 320000000 > random_genome.fna
