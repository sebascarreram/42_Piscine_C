ifconfig | grep "ether " | cut -f 2 | sed "s/ether //g"
