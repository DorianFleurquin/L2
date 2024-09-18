
#!/bin/bash

# Output file where the results will be stored
output_file="ping_results.txt"

# List of websites to ping
websites=(
  "www.berkeley.edu"
  "www.mit.edu"
  "www.uva.nl"
  "www.sydney.edu.au"
  "www.ucc.edu.gh"
)

# Empty the output file if it exists or create a new one
> "$output_file"

# Loop through each website and ping it
for site in "${websites[@]}"; do
  echo "Pinging $site..." >> "$output_file"
  ping -c 4 "$site" >> "$output_file" 2>&1
  echo "" >> "$output_file" # Add a new line between results
done

# Notify that the pings are complete
echo "Ping results have been written to $output_file"

