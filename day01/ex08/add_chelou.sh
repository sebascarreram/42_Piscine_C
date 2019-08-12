FIRST=$(echo $FT_NBR1 |
tr "'" "0" |
tr "\\" "1" |
tr "\"" "2" |
tr "?" "3" |
tr "!" "4"
)

SECOND=$(echo $FT_NBR2 |
tr "m" "0" |
tr "r" "1" |
tr "d" "2" |
tr "o" "3" |
tr "c" "4"
)

RESULT=$(echo "ibase=5; $FIRST + $SECOND" | bc)

echo "obase=13; $RESULT" | bc |
tr "0" "g" |
tr "1" "t" |
tr "2" "a" |
tr "3" "i" |
tr "4" "o" |
tr "5" " " |
tr "6" "l" |
tr "7" "u" |
tr "8" "S" |
tr "9" "n" |
tr "A" "e" |
tr "B" "m" |
tr "C" "f"
