cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | awk -v S=$FT_LINE1 -v E=$FT_LINE2 "NR>=S && NR<=E" | xargs | sed -e 's/ /, /g' | sed 's/$/./' | tr -d "\n"
