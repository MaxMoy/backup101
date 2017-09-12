cat /etc/passwd |  grep -v '#' | sed -n 'n;p' | sort -r |sed -n ''$FT_LINE1', '$FT_LINE2'p'| cut -d':' -f1| rev | sed -e '$ !  s/$/, /g' | xargs -I {} echo {}"."
