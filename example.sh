#! /usr/bin/env bash

set -e
set -o pipefail
set -u

./random-genome 3200000000 > random_genome.fna
