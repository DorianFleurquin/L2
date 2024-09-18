#!/bin/bash

# Output file where the results will be stored
output_file="traceroute_results.txt"

# List of websites to perform traceroute on
websites=(
  "www.berkeley.edu"  # California
  "www.mit.edu"       # Massachusetts
  "www.vu.nl"         # Amsterdam
  "www.ucl.ac.uk"     # London
  "www.sydney.edu.au" # Sydney
  "www.ucc.edu.gh"    # Ghana
)

# Empty the output file if it exists or create a new one
> "$output_file"

# Loop through each website and perform a traceroute
for site in "${websites[@]}"; do
  echo "Performing traceroute to $site..." >> "$output_file"
  traceroute "$site" >> "$output_file" 2>&1
  echo "" >> "$output_file" # Add a new line between results
done

# Notify that the traceroutes are complete
echo "Traceroute results have been written to $output_file"
