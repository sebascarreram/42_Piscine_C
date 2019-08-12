FIRST="$(echo $FT_LINE1 - 1 | bc)"
SECOND="$(echo $FT_LINE2 | bc)"

cat /etc/passwd |
  grep -v "^#" |
  sed g\;n |
  cut -d ":" -f 1 |
  rev |
  sort -r |
  tr -s "\n" |
  head -n "$SECOND" |
  tail -n "$(echo $SECOND - $FIRST | bc)" |
  tr "\n" "," |
  sed "s/,/, /g" |
  sed "s/, $/./"
