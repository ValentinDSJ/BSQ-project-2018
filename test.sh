#!/bin/bash
echo "Runtime: "
time ./bsq maps-intermediate/mouli_maps/intermediate_map_"$1" > test
diff test maps-intermediate/mouli_maps_solved/intermediate_map_"$1"
rm test
echo "done"
